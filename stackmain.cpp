
#include "stack.h"

int main()
{
    Stack<int> mystack;
    int i;
    do
    {
    cout<<"1:push.\t"<<"2.pop\t"<<"3.retrieve top element.\t"<<"4.check if empty.\t"<<"5.display.\t"<<"6.show size\t"<<"7.quit."<<endl;
    cout<<"Please enter 1-7 to test this stack:"<<endl;
    cin>>i;
    switch (i) {
            case 1:
                    cout<<"Please enter a element you want to push into stack"<<endl;
                    int one;
                    cin>> one;
                    mystack.push(one);
                    cout<<"Now the stack is: ";
                    mystack.display();
                    break;
            case 2:
                if(!mystack.empty())
                    {cout<<"Now the top element in this stack will be popped,";
                    mystack.pop();
                    cout<<" and the stack is: ";
                    if(mystack.empty())
                        {cout<<"empty.";}
                        else{
                            mystack.display();}
                }else
                    {cout<<"Sorry, this stack is empty now"<<endl;}
                    break;
            case 3:
                if(!mystack.empty())
                {
                    cout<<"The top element is:";
                    cout<<mystack.top();
                    cout<<endl;
                }else
                    {cout<<"Sorry, this stack is empty now"<<endl;}
                    break;
            case 4:
                    if(mystack.empty())
                        {cout<<"This stack is empty."<<endl;}
                    else{
                        cout<<"This stack is not empty, and this elments are: ";
                        mystack.display();
                    }
                    break;
            case 5:
                    if(!mystack.empty())
                        {cout<<"This stack is: ";
                        mystack.display();
                    }else
                        {
                        cout<<"Sorry, this stack is now empty"<<endl;
                        }
                    break;
            case 6:
                    if(!mystack.empty()){
                        cout<<"This stack's size now is: ";
                        cout<<mystack.size();
                        cout<<endl;
                        break;}
                    else
                    {cout<<"Sorry, this stack is now empty."<<endl;}
            }
    }while(i !=7);
    
    return 0;
}
