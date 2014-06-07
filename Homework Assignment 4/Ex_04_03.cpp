//
//  Ex_04_03.cpp
//  Homework Assignment 4
//
//  Created by AJ Cendejas on 6/6/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include "Ex_04_03.h"
using namespace std;

int findSmallest(int * arr, int size)
{
    int smallest = *arr;
    for( int* curr = arr; curr < arr +  size; curr ++)
    {
        if(*curr < (*curr+1))
            smallest = *curr;
    }
    return smallest;
}