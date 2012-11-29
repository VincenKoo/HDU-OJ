//
//  125. Decimal System.cpp
//  HDU-OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P125 main
#else
#include "algorithm.h"
#endif

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void split(const string& line, char* num, int& k)
{
    int pos = line.find_first_of('(');
    strcpy(num, line.substr(0, pos).c_str());
    k = atoi(line.substr(pos + 1, line.size() - 1).c_str());
}

int calc_decimal(const char* num, int k)
{
    int result = 0;
    for (; *num != '\0'; ++num) {
        result = (*num - '0') + result * k;
    }
    return result;
}

int P125(void)
{
    int n;
    while (cin >> n && n != 0) {
        int sum = 0;
        while (n--) {
            char num[16];
            int k;
            string line;
            cin >> line;
            split(line, num, k);
            sum += calc_decimal(num, k);
        }
        cout << sum << endl;
    }
    return 0;
}
