//
//  main.cpp
//  123
//
//  Created by tfsui3 on 2019/7/11.
//  Copyright © 2019 tfsui3. All rights reserved.
//
#include <iostream>

using namespace std;

template <typename V>
void switch1(V &a, V &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}

template <typename V>
void switch2(V &a, V &b)
{
    V t= a;
    a = b;
    b = t;
}

template <typename V>
void switch3(V &a, V &b)
{
  a += b;
  b = a-b;
  a = a-b;
}


int main()
{
    int a,b;
    a = 10;
    b = 20;
    cout<<a<<" "<<b<<endl;
    switch1(a,b);
    cout<<a<<" "<<b<<endl;
    switch2(a,b);
    cout<<a<<" "<<b<<endl;
    switch3(a,b);
    cout<<a<<" "<<b<<endl;
    
    char c ='c';
    char d ='d';
    
    cout<<c<<" "<<d<<endl;
    switch1(c, d);
    cout<<c<<" "<<d<<endl;
    switch2(c, d);
    cout<<c<<" "<<d<<endl;
    switch3(c, d);
    cout<<c<<" "<<d<<endl;
    

    return 0;
}
