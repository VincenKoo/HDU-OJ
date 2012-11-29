//
//  1003. Max Sum.cpp
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P1003 main
#else
#include "algorithm.h"
#endif

#include <iostream>
#include <vector>
using namespace std;

/*
 7
 5 6 -1 5 4 -7
 7 0 6 -1 1 -6 7 -5
 6 6 -7 11 4 -20 30
 6 -20 2 -20 3 4 7
 1 4
 3 2 -4 -7
 4 -1 -2 -3 -4
 */
/*
 14 1 4
 7 1 6
 30 6 6
 4 1 1
 2 1 1
 -1 1 1
 */

int P1003(void)
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        int N;
        cin >> N;
        
        int seq[100002] = { 0 };
        int v[100002] = { 0 };
        int start, end;
        start = end = 1;
        cin >> v[1];
        seq[1] = v[1];
        for (int j = 2; j <= N; ++j) {
            cin >> v[j];
            // D(n) = max(D(n-1)+Xn, Xn)
            seq[j] = max(seq[j-1]+v[j], v[j]);
            // select the max D(n)
            if (seq[j] > seq[end]) {
                end = j;
            }
        }
        
        // D(n) - D(n-1) = v[n]
        for (start = end; start > 1; --start) {
            if (seq[start] - seq[start - 1] != v[start]) {
                break;
            }
        }

        if (i != 1) {
            cout << endl;
        }
        cout << "Case " << i << ":" << endl;
        cout << seq[end] << " " << start << " " << end << endl;
    }
    return 0;
}
