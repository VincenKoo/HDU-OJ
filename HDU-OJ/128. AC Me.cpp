//
//  128. AC Me.cpp
//  HDU-OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P128 main
#else
#include "algorithm.h"
#endif

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <map>
using namespace std;

int P128(void)
{
    char line[100000] = { 0 };
    int letter_count[26];
    while (gets(line)) {
        memset(letter_count, 0, 26 * sizeof(int));
        
        for (int i = strlen(line) - 1; i >= 0; --i) {
            if (line[i] >= 'a' && line[i] <= 'z') {
                letter_count[line[i] - 'a']++;
            }
        }
        
        for (char i = 0; i < 26; ++i) {
            cout << (char)('a' + i) << ":" << letter_count[i] << endl;
        }
        cout << endl;
    }
    return 0;
}
