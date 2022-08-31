#include<iostream>

using namespace std;

class Shape{
protected:
    int height,width;
public:
    Shape(int x,int y)
    {
        height = x;
        width = y;
    }
    // virtual function is disable default setting the function . It is called Static resolution / linkage or early binding to prevent this here we can use `virtual`
    //Defining in a base class a virtual function, with another version in a derived class, signals to the compiler that we don't want static linkage for this function.
   virtual int area()
    {
        cout<<"Parent class area : "<<height * width<<endl;
        return height * width;
    }

    // When Only declare function but implement in derived class then it is an interface
   // virtual int area() = 0;
};

class Rectangle: public Shape{
public:
    Rectangle(int x=0, int y=0) : Shape(x,y) { }
    int area()
    {
        cout<<"Rectangle area : "<< width * height<<endl;
        return height * width;
    }
};

class Triangle: public Shape
{
public:
    Triangle(int x=0, int y=0):Shape(x,y){ }
    int area()
    {
        cout<<"Triangle area : "<< width * height / 2<<endl;
        return width * height / 2;
    }
};

int main()
{
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);

    shape = &rec;
    shape->area();
    shape = &tri;
    shape->area();
    return 0;
}
