//
//  122. Box of Bricks.cpp
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P122 main
#else
#include "algorithm.h"
#endif

#include <iostream>
#include <cstdlib>
using namespace std;

int vcmp(const void* a, const void* b)
{
    return *(int*)b - *(int*)a;
}

int P122(void)
{
    int n, bricks[50];
    int set = 1;
    while (cin >> n && n != 0) {
        int i, sum, moves;
        sum = moves = 0;
        for (i = 0; i < n; ++i) {
            cin >> bricks[i];
            sum += bricks[i];
        }
        
        int avg = sum / n;
        for (i = 0; i < n; ++i) {
            moves += abs(bricks[i] - avg);
        }
        moves /= 2;
        
        cout << "Set #" << set++ << endl;
        cout << "The minimum number of moves is " << moves << "." << endl << endl;
    }
    return 0;
}
