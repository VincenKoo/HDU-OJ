//
//  124. Balloon Comes.cpp
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P124 main
#else
#include "algorithm.h"
#endif

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int P124(void)
{
    int n;
    cin >> n;
    for (int scenario = 1; scenario <= n; ++scenario) {
        char opr;
        int a, b;
        cin >> opr >> a >> b;
        switch (opr) {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                if (a % b != 0) {
                    printf("%.2f\n", (double)a / (double)b);
                } else {
                    cout << a / b << endl;
                }
                break;
            default:
                break;
        }
    }
    return 0;
}
