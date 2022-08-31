#include<iostream>

using namespace std;

class Adder {
public:
     // constructor
    Adder(int x = 0)
    {
        total = x;
    }
    // Interface for outside scope
    void addNum(int x)
    {
        total += x;
    }
    //Interface for outside scope
    int getTotal()
    {
        return total;
    }

private:
    // Hidden Data from Outside scope
    int total;
};

int main()
{
    Adder a;
    a.addNum(10);
    a.addNum(30);
    a.addNum(40);
    cout<<"Sum of total: "<< a.getTotal()<< endl;
    return 0;
}
