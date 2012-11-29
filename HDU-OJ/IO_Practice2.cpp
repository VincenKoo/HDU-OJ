//
//  IO_Practise2.cpp
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define IO_Practise2 main
#else
#include "algorithm.h"
#endif

#include <iostream>
using namespace std;

int IO_Practise2(void)
{
    int a, b, n;
    cin >> n;
    while ((cin >> a >> b) && (n--))
    {
        cout << a + b << endl;
    }
    return 0;
}
