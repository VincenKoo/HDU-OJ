//
//  1000. A + B Problem.cpp
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P1000 main
#else
#include "algorithm.h"
#endif

#include <iostream>
using namespace std;

int P1000(void)
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << a + b << endl;
    }
    return 0;
}
