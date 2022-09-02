#include<iostream>

using namespace std;

int main()
{
    int a = 1;

    for(int i=50; i>10; i=i-5)
    {
        a = a + (~i);
    }
    printf("%d", a);
}
