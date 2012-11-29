//
//  1002. A + B Problem II.cpp
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P1002 main
#else
#include "algorithm.h"
#endif

#include <iostream>
using namespace std;

char* vsum(const char* a, const char* b, char* sum)
{
    int i, carry;
    int alen = strlen(a);
    int blen = strlen(b);
    int slen = max(alen, blen) + 1;
    for (i = carry = 0; i < alen || i < blen || carry; ++i) {
        if (i < alen) {
            carry += (int)(a[alen - i - 1] - '0');
        }
        if (i < blen) {
            carry += (int)(b[blen - i - 1] - '0');
        }
        sum[slen - i - 1] = carry % 10 + '0';
        carry /= 10;
    }
    return (sum[0] >= '0' ? sum : sum + 1);
}


int P1002(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        char a[1024], b[1024];
        char sum[1024] = { 0 };
        cin >> a >> b;
        if (i != 1) {
            cout << endl;
        }
        cout << "Case " << i << ":" << endl;
        cout << a << " + " << b << " = " << vsum(a, b, sum) << endl;
    }
    return 0;
}
