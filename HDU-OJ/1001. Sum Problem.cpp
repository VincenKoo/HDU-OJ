//
//  1001. Sum Problem.cpp
//  HDU-OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P1001 main
#else
#include "algorithm.h"
#endif

#include <iostream>
using namespace std;

int P1001(void)
{
    int n;
    while (cin >> n) {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        cout << sum << endl << endl;
    }
    return 0;
}
