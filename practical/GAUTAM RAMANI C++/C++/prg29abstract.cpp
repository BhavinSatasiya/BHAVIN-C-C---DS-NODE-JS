#include<iostream>
using namespace std;
class shape
{
    protected:
    float height,width;
    public:
    virtual float getdata()=0;   //Pure Virtual Function(Abstract)
    //fflush(stdin);
    void setwidth(float W)
    {
        width=W;
    }
    void setheight(float H)
    {
        height=H;
    }
};
class Rectangle:public shape
{
    public:
    float getdata()
    {
        return (width*height);
    }
};
class Triangle:public shape
{
    public:
    float getdata()
    {
        return (width*height)/2;
    }
};
int main()
{
    Rectangle Rect;
    Triangle Tri;
    Rect.setheight(5);
    Rect.setwidth(7);
    cout<<"Total Rectangle Area:"<<Rect.getdata()<<endl;
    Tri.setheight(5);
    Tri.setwidth(7);
    cout<<"Total Triangle Area:"<<Tri.getdata()<<endl;
}