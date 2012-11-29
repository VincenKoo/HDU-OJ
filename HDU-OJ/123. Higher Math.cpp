//
//  123. Higher Math.cpp
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P123 main
#else
#include "algorithm.h"
#endif

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

#if 1
int square(int n)
{
    return n * n;
}
#endif

int P123(void)
{
    int n, sides[3];
    cin >> n;
    for (int scenario = 1; scenario <= n; ++scenario) {
        int max = 0;
        for (int i = 0; i < 3; ++i) {
            cin >> sides[i];
            if (sides[i] > sides[max]) {
                max = i;
            }
        }
        if (max != 0) {
            swap(sides[0], sides[max]);
        }
        cout << "Scenario #" << scenario << ":\n";
        cout << ((square(sides[0]) == square(sides[1]) + square(sides[2])) ?
        "yes" : "no") << endl << endl;
    }
    return 0;
}
