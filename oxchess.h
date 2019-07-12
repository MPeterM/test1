//
//  main.cpp
//  Well Grids Game
//
//  Created by tfsui3 on 2019/7/12.
//  Copyright © 2019 tfsui3. All rights reserved.
//

#include <iostream>
#include <string>

#ifndef CLASS_OXCHESS
#define CLASS_OXCHESS

using namespace std;

enum Situations //check if a position is o/x or not occupied;
{
    Situation_default = 0,  //not occupied;
    Situation_o = 1,        //o
    Situation_x = 2,        //x
};

class oxchess
{
    public:
        oxchess();          //initialize chessboard.
        void display(int a[][3], int, int);
        void CheckSituation(int a[][3], Situations);
        //void WhoIsFirst();
        bool CheckIfWin(int a[][3], Situations);
        void gameOver();
    public:
        int a[3][3];
        Situations player = Situation_default;
};

oxchess::oxchess()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            a[i][j] = Situation_default;
        }
    }
};

void oxchess::display(int(*a)[3], int n, int m)
{
    cout<<"-------"<<endl;
    for(int i = 0; i<n;i++)
    {
        cout<<"|";
        for(int j = 0;j<m;j++)
        {
            if(a[i][j]==Situation_default)
            {cout<<" ";}
            else if(a[i][j] == Situation_o)
            {cout<<"O";}
            else if(a[i][j] == Situation_x)
            {cout<<"X";}
            cout<<"|";
        }
        cout<<endl<<"-------"<<endl;
    }
    cout<<endl;
}

void oxchess::CheckSituation(int (*a)[3], Situations player)
{
    int i,j;
        cout<<"Go ahead, enter your Row and Colume."<<endl;
        cout<<"Row: ";
        cin>>i;
        cout<<"and Colume: "<<endl;
        cin>>j;
    while(1){
    if(a[i-1][j-1] == Situation_default)
    {
        if(player == Situation_o)
            {a[i-1][j-1] = Situation_o;
            break;}
        else if(player == Situation_x)
            {a[i-1][j-1] = Situation_x;
            break;}
    }else{
        cout<<"Sorry, you placed in a wrong position."<<endl;
        cout<<"Please re-enter your Row and Colume: "<<endl;
        cout<<"Row: ";
        cin>>i;
        cout<<"and Colume: "<<endl;
        cin>>j;
    }
    }
        display(a,3, 3);
}

bool oxchess::CheckIfWin(int a[][3],Situations player)
{
        int i=0;
        int j=0;
        for(i=0; i<3; i++)
        {
            if(a[i][j] == a[i][j+1]&& a[i][j] == a[i][j+2]&&
                a[i][j] != Situation_default)
            {
                if(player == Situation_o)
                {cout<<"O Player Win!"<<endl;
                    gameOver();
                    return true;
                }
                else if(player == Situation_x)
                {cout<<"X Player Win!"<<endl;
                    gameOver();
                    return true;
                }
            }
        }
        for(j=0; j<3; j++)
        {
            if(a[i][j] == a[i+1][j]&& a[i][j]==a[i+2][j]&&
                a[i][j] != Situation_default)
            {
                if(player == Situation_o)
                {cout<<"O Player Win!"<<endl;
                    gameOver();
                    return true;
                }
                else if(player == Situation_x)
                {cout<<"X Player Win!"<<endl;
                    gameOver();
                    return true;
                }
                
            }
            
        }
    
        while((a[0][0]==a[1][1]&&a[0][0]==a[2][2]&&a[0] [0]!=Situation_default) ||          (a[0][2]==a[1][1]&&a[0][2]==a[2][0]&&a[0][2]!=Situation_default))
            {
                {
                if(player == Situation_o)
                {cout<<"O Player Win!"<<endl;
                    gameOver();
                    return true;
                }
                else if(player == Situation_x)
                {cout<<"X Player Win!"<<endl;
                    gameOver();
                    return true;
                    }
                }
            }
        return false;
}

void oxchess::gameOver()
{
    cout<<"Thank you for playing!"<<endl;
    cout<<"Game Over."<<endl;
}



#endif

/*

    Objects：棋盘。
    Attributs：{
                    Size：3x3.(二维数组，双循环表达)
                    Situations: 3种状态 1.没下。
                                        2.下O
                                        3.下X
                    Wincheck:   Win/Lose/no winner
    events:
            1.print chessboard.
            3.check chessboard's situation.     //      O/X, not occupied.
            2.check if win.                     //      3Os / 3Xs.
            /*3.determine the player who is first.   //   %2-> if(0)->
            4.go start.{



    */
