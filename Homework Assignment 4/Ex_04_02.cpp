//
//  Ex_04_02.cpp
//  Homework Assignment 4
//
//  Created by AJ Cendejas on 6/6/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include "Ex_04_02.h"

using namespace std;

int * doubleCapacity(const int * list, int size)
{
    int * newList = new int[2*size];
    for(int i = 0; i < size; i++)
    {
        newList[i] = list[i];
    }
    return newList;
}