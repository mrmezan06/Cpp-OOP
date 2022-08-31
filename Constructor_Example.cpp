#include<iostream>

using namespace std;

class Line {
public:
    void setLength(double len);
    double getLenth(void);
    Line();
private:
    double length;
};

// Set Constructor
Line::Line(void) {
printf("Object being created\n");
}

void Line::setLength(double len){
    length = len;
}

double Line::getLenth(void){
return length;
}

// Value Initialize constructor Example
class Square {
public:
    void setAxis(int x);
    int calculate();
    Square(int x);
private:
    int x;
};

// Valued Constructor
Square::Square(int a) {
    x = a;
    cout<<"Object is created with "<<x<<endl;
}
void Square::setAxis(int a)
{
    x = a;
}
int Square::calculate()
{
    return x*x;
}
int main()
{
//    Line line;
//    line.setLength(6.0);
//    printf("Line length is %0.2f\n", line.getLenth());
      Square square(12);
      cout<<"Square value is "<<square.calculate()<<endl;

      square.setAxis(6);
      cout<<"After reseting axis, square is "<< square.calculate()<<endl;

    return 0;
}
