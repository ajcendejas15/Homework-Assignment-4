//
//  Ex_04_01.cpp
//  Homework Assignment 4
//
//  Created by AJ Cendejas on 6/6/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include "Ex_04_01.h"

using namespace std;

void prompt(int * size)
{
    cout << "how many numbers will you enter? ";
    cin >> *size;
}

int* makeArray(int size)
{
    int * array = new int(size);
    for (int *curr = array; curr < array + size; curr++)
    {
        cout << "Enter a number: ";
        cin >> *curr;
    }
    return array;
}

double ArrayAvg( int * arr, int size)
{
    int total = 0;
    for (int* curr = arr; curr < arr + size; curr++)
    {
        total += *curr;
    }
    return total/size;
}

int AboveAvg(double avg, int * arr, int size)
{
    int above = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > avg)
            above++;
    }
    return above;
}
