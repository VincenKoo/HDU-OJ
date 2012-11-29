//
//  algorithm.h
//  HDU-OJ
//
//  Created by Vincen on 12-11-15.
//  Copyright (c) 2012年 Vincen. All rights reserved.
//

#ifndef HDU_OJ_algorithm_h
#define HDU_OJ_algorithm_h

#define DECLARE_FUNC(name) extern int name(void)
#define CALL_FUNC(name) \
    std::cout << "Call Function <" << #name << "()>: \n\n"; \
    name();

DECLARE_FUNC(IO_Practise1);
DECLARE_FUNC(IO_Practise2);
DECLARE_FUNC(IO_Practise3);
DECLARE_FUNC(IO_Practise4);
DECLARE_FUNC(IO_Practise5);
DECLARE_FUNC(IO_Practise6);
DECLARE_FUNC(IO_Practise7);

DECLARE_FUNC(P121);
DECLARE_FUNC(P122);
DECLARE_FUNC(P123);
DECLARE_FUNC(P124);
DECLARE_FUNC(P125);
DECLARE_FUNC(P126);
DECLARE_FUNC(P127);
DECLARE_FUNC(P128);

DECLARE_FUNC(P1000);
DECLARE_FUNC(P1001);
DECLARE_FUNC(P1002);
DECLARE_FUNC(P1003);
DECLARE_FUNC(P1160);

#endif
