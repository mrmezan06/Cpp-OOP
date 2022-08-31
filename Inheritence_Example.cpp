#include<iostream>

using namespace std;

class shape
{
public:
    void setWidth(int x){
        width = x;
    }
    void setHeight(int y)
    {
        height = y;
    }

protected:
    int width;
    int height;
};
// Member class defined that can access Parent class Protected and public method
class Rectangle: public shape {
public:
    int getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rect;
    rect.setHeight(20);
    rect.setWidth(30);

    cout<<"Area : "<<rect.getArea()<<endl;
    return 0;
}
