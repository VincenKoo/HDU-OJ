//
//  127. Identity Card.cpp
//  HDU-OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifdef ONLINE_JUDGE
#define P127 main
#else
#include "algorithm.h"
#endif

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <map>
using namespace std;

int P127(void)
{
    map<string, string> regions;
    regions["33"] = "Zhejiang";
    regions["11"] = "Beijing";
    regions["71"] = "Taiwan";
    regions["81"] = "Hong Kong";
    regions["82"] = "Macao";
    regions["54"] = "Tibet";
    regions["21"] = "Liaoning";
    regions["31"] = "Shanghai";
    
    int n;
    cin >> n;
    while (n--) {
        string id_card, region, year, month, day;
        cin >> id_card;
        
        region = regions[id_card.substr(0, 2)];
        year = id_card.substr(6, 4);
        month = id_card.substr(10, 2);
        day = id_card.substr(12, 2);
        
        cout << "He/She is from " << region << ",and his/her birthday is on " << month << "," << day << "," << year << " based on the table." << endl;
    }
    return 0;
}
