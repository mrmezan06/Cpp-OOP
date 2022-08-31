#include<iostream>

using namespace std;

class PrintData {
public:
    void print(int x)
    {
        cout<<"Printing int : "<<x<<endl;
    }
    void print(double x)
    {
        cout<<"Printing double: "<<x<<endl;
    }
    void print(char* c)
    {
        cout<<"Printing string: "<<c<<endl;
    }
};

int main()
{
    PrintData pd;
    pd.print(990);
    pd.print(9.53760);
    pd.print("Mejanur Rahman");
    return 0;
}
