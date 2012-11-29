//
//  126. Specialized Four-Digit Numbers
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P126 main
#else
#include "algorithm.h"
#endif

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int calc(int num, int k)
{
    int sum = 0;
    while (num / k != 0) {
        sum += num % k;
        num /= k;
    }
    sum += num;
    return sum;
}

int P126(void)
{
    for (int i = 1000; i <= 9999; ++i)
    {
        int sum10, sum12, sum16;
        sum10 = calc(i, 10);
        sum12 = calc(i, 12);
        sum16 = calc(i, 16);
        if (sum10 == sum12 && sum10 == sum16) {
            cout << i << endl;
        }
    }
    return 0;
}
