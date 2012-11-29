//
//  IO_Practise3.cpp
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define IO_Practise3 main
#else
#include "algorithm.h"
#endif

#include <iostream>
using namespace std;

int IO_Practise3(void)
{
    int a, b;
    while ((cin >> a >> b) && (a != 0 || b != 0))
    {
        cout << a + b << endl;
    }
    return 0;
}
