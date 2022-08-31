#include<iostream>

using namespace std;

class Box {
public:
    int getVolume()
    {
        return length * breadth * height;
    }
    void setLength(int x)
    {
        length = x;
    }
    void setHeight(int y)
    {
        height = y;
    }
    void setBreadth(int z)
    {
        breadth = z;
    }
     // Overload + operator to add two Box objects.
     Box operator+(const Box& b)
     {
         Box box;
         box.length = this->length + b.length;
         box.height = this->height + b.height;
         box.breadth = this->breadth + b.breadth;
         return box;
     }
private:
    int length;
    int breadth;
    int height;
};

int main()
{
    Box b1;
    Box b2;
    Box b3;

    int volume = 0;

// Box 1
    b1.setLength(6);
    b1.setHeight(5);
    b1.setBreadth(4);


// Box 2
    b2.setLength(8);
    b2.setHeight(7);
    b2.setBreadth(6);
// Box 3
    b3.setLength(11);
    b3.setHeight(10);
    b3.setBreadth(9);

    cout<<"Box 1 volume: "<<b1.getVolume()<<endl;
    cout<<"Box 2 volume: "<<b2.getVolume()<<endl;
    cout<<"Box 3 volume: "<<b3.getVolume()<<endl;

    Box b4 = b1 + b2;
    cout<<"Box 4 volume: "<<b4.getVolume()<<endl;
    return 0;
}
