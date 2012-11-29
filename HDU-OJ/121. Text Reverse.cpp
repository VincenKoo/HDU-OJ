//
//  121. Text Reverse.cpp
//  HDU_OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P121 main
#else
#include "algorithm.h"
#endif

#include <iostream>
using namespace std;

char* vreverse(char* str, int start, int end)
{
    for (; end > 0 && start < end; ++start, --end) {
        swap(str[start], str[end]);
    }
    return str;
}

int P121(void)
{
    int n;
    scanf("%d\n", &n);
    while (n--) {
        char line[1024];
        int offset;
        memset(line, 0, 1024);
        for (offset = 0; offset < 1024; ++offset) {
            line[offset] = getchar();
            if (line[offset] == '\n') {
                break;
            }
        }
        
        int start, end;
        for (start = end = 0; end <= offset; ++end) {
            if (line[end] == ' ' || line[end] == '\n') {
                vreverse(line, start, end - 1);
                start = end + 1;
            }
        }
        
        cout << line;
    }
    return 0;
}
