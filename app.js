const express = require("express");
const app = express()
const dotenv = require ('dotenv').config()
const morgan = require('morgan');
const cors = require('cors');
const mongoose = require('mongoose');
const { router } = require("express");
const bodyParser =require("body-parser") 
const authjwt = require("./helpers/jwt")

//middleware
app.use(cors());
app.use("*",cors())

app.use(bodyParser.json());
app.use(morgan("tiny"));
app.use(authjwt())

// app.use(express.json())

//routers
const categoriesRoutes = require("./routes/categories");
const productsRoutes = require("./routes/products");
const usersRoutes = require("./routes/users")
app.use('/products',productsRoutes);
app.use('/categories',categoriesRoutes);
app.use('/users',usersRoutes);




mongoose.connect(process.env.CONNECTION_URL)
.then(()=>{
    console.log("Detabase connection....")
}).catch((err)=>{
    console.log(err);
})


app.listen(process.env.PORT, ()=> console.log(`listening on port ${process.env.PORT}`));

// app.get("/",(req,res)=>{
//     res.send("Hello...!");
// })

// app.post("/",(req,res)=>{
//     res.send("Hello...Post");
// })

// app.listen(3300,()=>{
//     console.log("server number 3300");
// })