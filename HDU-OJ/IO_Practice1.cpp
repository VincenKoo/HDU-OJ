//
//  IO_Practise1.cpp
//  HDU-OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define IO_Practise1 main
#else
#include "algorithm.h"
#endif

#include <iostream>
using namespace std;

int IO_Practise1(void)
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << a + b << endl;
    }
    return 0;
}
