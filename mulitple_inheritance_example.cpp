#include<iostream>

using namespace std;

class Shape{
public:
    void setHeight(int h)
    {
        height = h;
    }
    void setWidth(int w)
    {
        width = w;
    }
protected:
    int height, width;
};

class PaintCost{
public:
    int getCost(int area)
    {
        return area * 3;
    }
};

class Compute: public Shape, public PaintCost {
public:
    int getArea()
    {
        return height * width;
    }
};

int main()
{
    Compute cm;
    cm.setHeight(6);
    cm.setWidth(5);
    int area = cm.getArea();
    cout<<"Area:"<<area<<endl;
    cout << "Cost: "<<cm.getCost(area) << endl;
    return 0;
}
