const { user, User } = require("../models/user");
const express = require("express");
const router = express.Router();
const bcrypt = require("bcryptjs");
const jwt=require("jsonwebtoken");

//get

// router.get("/", async (req, res) => {
//   const userList = await User.find();

//   if (!userList) {
//     res.status(500).json({ success: false });
//   }
//   res.send(userList);
// });

router.get('/', async (req, res) => {
  const userList = await User.find().select("-passwordHash");

  if (!userList) {
    res.status(500).json({ success: false });
  }
  res.send(userList);
});


//post

router.post("/", async (req, res) => {
  
    let user = new User({
      name: req.body.name,
      email: req.body.email,
      passwordHash: bcrypt.hashSync(req.body.passwordHash,10),
      phone: req.body.phone,
      isAdmin: req.body.isAdmin,
      street: req.body.street,
      apartment: req.body.apartment,
      zip: req.body.zip,
      city: req.body.city,
      country: req.body.country,
    });
    user = await user.save();
    if (!user) return res.status(400).send("the user cannot be found !");
    res.send(user);
  });

  router.post("/login",async(req,res) => {
    const user = await User.findOne({email:req.body.email});
    const secret = process.env.secret;
    if(!user){
      return res.status(400).send("The user not found");
    }
    if(user && bcrypt.compareSync(req.body.passwordHash,user.passwordHash)){
      const token = jwt.sign(
        {
          userId:user.id,
          // isadmin:user.isAdmin;
        },
        secret,
        {expiresIn:"1d"} 
      );
      res.status(200).send({user:user.email,token:token});
    }else{
      res.status(400).send("password is wrong");
    }
  });

  //Put

  router.put('/:id',async(req,res)=>{
    if(!mongoose.isValidObjectId(req.params.id)){
        return res.status(400).send("Invalid Product Id");
    }
    let user = new User({
        name: req.body.name,
        email: req.body.email,
        passwordHash: req.body.passwordHash,
        phone: req.body.phone,
        isAdmin: req.body.isAdmin,
        street: req.body.street,
        apartment: req.body.apartment,
        zip: req.body.zip,
        city: req.body.city,
        country: req.body.country,
      });
    
    if(!user)return res.status(400).send("the user cannot be found !");
    res.send(user);
});

//Delete

router.delete('/:id',async(req,res)=>{
    let user = await User.findByIdAndRemove(req.params.id);
    if(!user)return res.status(400).send("the category cannot be created !");
    res.send(user);
})

module.exports = router;





// {
//     "name":"Bhavin",
//     "email":"xyz@gmail.com",
//     "passwordHash":"123456",
//     "phone":"9428024283",
//     "isAdmin":"true",
//     "street":"surat",
//     "apartment":"edfrfr",
//     "zip":"xyz",
//     "city":"surat",
//     "country":"india"
//     }