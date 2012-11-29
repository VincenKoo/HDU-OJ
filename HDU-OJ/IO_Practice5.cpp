//
//  IO_Practise5.cpp
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define IO_Practise5 main
#else
#include "algorithm.h"
#endif

#include <iostream>
using namespace std;

int IO_Practise5(void)
{
    int n, sum, num, lines;
    while (cin >> lines && lines--) {
        while (cin >> n && n != 0) {
            sum = 0;
            while (n--) {
                cin >> num;
                sum += num;
            }
            cout << sum << endl;
        }
    }
    return 0;
}
