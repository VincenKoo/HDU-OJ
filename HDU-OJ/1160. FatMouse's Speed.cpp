//
//  1160. FatMouse's Speed.cpp
//  HDU-OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P1160 main
#else
#include "algorithm.h"
#endif

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


struct Mouse
{
    int id;
    int weight;
    int speed;
};

static inline int vcmp(const void* a, const void* b)
{
    int result = ((const Mouse*)a)->weight
        - ((const Mouse*)b)->weight;
    if (result == 0) {
        result = ((const Mouse*)a)->speed
            - ((const Mouse*)b)->speed;
    }
    return result;
}

int P1160(void)
{
    Mouse mice[1000];
    int weight, speed;
    int n = 0;
    for (; cin >> weight >> speed && n < 1000; ++n) {
        mice[n].weight = weight;
        mice[n].speed = speed;
        mice[n].id = n + 1;
    }
    qsort(mice, n, sizeof(struct Mouse), vcmp);
    
    int vspeed[1000] = { 1 };
    int max = 0;
    vspeed[n-1] = 1;
    //    vspeed[max] = mice[0].speed;
    //cout << mice[n-1].weight << " " << mice[n-1].speed << endl;
    //cout << vspeed[n-1] << " " << mice[n-1].id << endl;
    for (int i = n-2; i >= 0; --i) {
        //cout << mice[i].weight << " " << mice[i].speed << endl;
        vspeed[i] = 1;
        for (int j = i+1; j < n; ++j) {
            if (mice[i].speed > mice[j].speed) {
                vspeed[i] = vspeed[j] + 1;
                break;
            }
        }
        if (vspeed[i] > vspeed[max]) {
            max = i;
        }
        //cout << vspeed[i] << " " << mice[i].id << endl;
    }
    int current = mice[max].speed + 1;
    cout << vspeed[max] << endl;
    for (int i = max; i < n; ++i) {
        if (mice[i].speed < current) {
            cout << mice[i].id << endl;
            current = mice[i].speed;
        }
    }
    //cout << vspeed[max] << " " << mice[max].id << endl;
    //cout << max << endl;
    return 0;
}

#if 0
int P1160(void)
{
    Mouse mice[1000];
    int weight, speed;
    int n = 0;
    for (; cin >> weight >> speed && n < 1000; ++n) {
        mice[n].weight = weight;
        mice[n].speed = speed;
        mice[n].id = n + 1;
    }
    qsort(mice, n, sizeof(struct Mouse), vcmp);
    
    int vspeed[1000] = { 1 };
    int max = 0;
//    vspeed[max] = mice[0].speed;
    cout << mice[0].weight << " " << mice[0].speed << endl;
    cout << vspeed[0] << " " << mice[0].id << endl;
    for (int i = 1; i < n; ++i) {
        cout << mice[i].weight << " " << mice[i].speed << endl;
        vspeed[i] = 1;
        for (int j = i-1; j >= 0; --j) {
            if (mice[j].speed > mice[i].speed) {
                vspeed[i] = vspeed[j] + 1;
                break;
            }
        }
        if (vspeed[i] > vspeed[max]) {
            max = i;
        }
        cout << vspeed[i] << " " << mice[i].id << endl;
    }
    int current = mice[max].speed;
    for (int i = max; i >= 0; --i) {
        if (mice[i].speed < current) {
            cout << mice[i].id << endl;
            current = mice[i].speed;
        }
    }
    cout << vspeed[max] << " " << mice[max].id << endl;
    cout << max << endl;
    return 0;
}
#endif
