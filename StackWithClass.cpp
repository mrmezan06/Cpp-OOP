#include<iostream>

using namespace std;
#define Size 100

class Stack{
protected:
    int num[Size];
    int top;
public:
    Stack();
    int isFull();
    int isEmpty();
    int push(int x);
    int pop();
    void display();
};

Stack::Stack(){
top = -1;
}

int Stack::isEmpty(){
if(top==-1)
{
    return 1;
}else {
 return 0;
}
}
int Stack::isFull()
{
    if(top==(Size-1))
    {
        return 1;
    }else {
    return 0;
    }
}

int Stack::push(int x)
{
    if(isFull())
    {
        return -999;
    }else
    {
        ++top;
        num[top] = x;
        return x;
    }
}

int Stack::pop()
{
    if(isEmpty())
    {
        return -999;
    }else
    {
        int tmp = num[top];
        --top;
        return tmp;
    }
}

void Stack::display()
{
    cout<<"The stack is : "<<endl;
    for(int i=0;i<=top;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Stack s;
    int ch, n, tmp;
    do {
        cout<<"0 to exit"<<endl;
        cout<<"1 to push"<<endl;
        cout<<"2 to pop"<<endl;
        cout<<"3 to display"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 0:
            break;
        case 1:
            cout<<"Enter number :";
            cin>>n;
            tmp = s.push(n);
            if(tmp == -999)
            {
                cout<<"Overflow the stack"<<endl;
            }else
            {
                cout<<"Data has been inserted!"<<endl;
            }
            break;
        case 2:
            tmp = s.pop();
            if(tmp == -999)
            {
                cout<<"Underflow the stack"<<endl;
            }else
            {
                cout<<"Top has been popped!"<<endl;
            }
            break;
        case 3:
            s.display();
            break;
        default:
            cout<<"Nothing happen!!"<<endl;
        }

    }while(ch != 0);

}
