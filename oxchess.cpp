//
//  main.cpp
//  Well Grids Game
//
//  Created by tfsui3 on 2019/7/12.
//  Copyright © 2019 tfsui3. All rights reserved.
//

#include "oxchess.h"
#include <iostream>

using namespace std;

int main()
{
    oxchess ox;
    ox.display(ox.a, 3, 3);
    while(1)
    {
        
        ox.CheckSituation(ox.a, Situation_o);
        if(ox.CheckIfWin(ox.a, Situation_o)==true )
        {break;}
        
        
        ox.CheckSituation(ox.a, Situation_x);
        if(ox.CheckIfWin(ox.a, Situation_x)==true)
        {break;}
        
    }

    return 0;
}

