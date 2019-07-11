
#include <vector>
#include <iostream>

using namespace std;

#ifndef STACK
#define STACK

template <typename StackElement>
class Stack {

    public:
        Stack()
        {vecstack.empty();}
    
        bool empty()const
        {return vecstack.empty();}
    
        void push(const int &data)
        {vecstack.push_back(data);}
    
        void pop()
        {vecstack.pop_back();}
    
        StackElement top() const
        {return vecstack.back();}
    
        int size()const
        {return vecstack.size();}
    
        void display()const
        {
        for(int p = vecstack.size()-1;p>=0;p--)
            {cout<< vecstack[p]<<" ";}
        cout<<endl;
        }
    private:
        vector<int> vecstack;
};


#endif
