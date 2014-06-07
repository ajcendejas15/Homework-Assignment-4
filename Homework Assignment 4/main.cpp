//
//  main.cpp
//  Homework Assignment 4
//
//  Created by AJ Cendejas on 6/6/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include <iostream>
#include "Ex_04_01.h"
#include "Ex_04_02.h"
#include "Ex_04_03.h"
#include "Ex_04_04.h"
#include "Ex_04_05.h"

using namespace std;

int main()
{
    //Ex_01
    int SIZE;
    prompt(&SIZE);
    int*list = makeArray(SIZE);
    double average = ArrayAvg(list, SIZE);
    cout << "There were " << AboveAvg(average, list, SIZE) << " above the average.\n";
    delete[] list;
    
    //Ex_02
    int*array = makeArray(SIZE);
    int*new_array = doubleCapacity(array, SIZE);
    cout << "\nNew Array\n";
    for (int* curr = new_array; curr < new_array + 2*SIZE; curr++)
    {
        static int i = 1;
        cout << "Number " << i << ": " << *curr << endl;
        i++;
    }
    delete[] array;
    delete[] new_array;
    
    //Ex_03
    int Test[8] = {1, 2, 4, 5, 10, 100, 2, -22};
    int * Testptr = Test;
    int small = findSmallest(Testptr, 8);
    cout << endl << small << " is the smallest number in the array.\n";
    
    //Ex_04
    Rectangle2D r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4);
    cout << "r1 Area: " << r1.getArea() << "\nr1 Perimeter: " << r1.getPerimeter();
    cout << boolalpha << "\nr1 contains (3,3): " << r1.contains(3, 3);
    cout << "\nr1 contains(r2): " << r1.contains(r2);
    cout << "\nr1 overlaps(r3): " << r1.overlaps(r3) << endl;
    
    //Ex_05
    Course CS172("CS-172-AB-OL", 15);
    CS172.addStudent("AJ");
    CS172.addStudent("Logan");
    CS172.addStudent("Shane");
    CS172.dropStudent("Logan");
    for(string*curr = CS172.getStudents(); curr < CS172.getStudents() + CS172.getNumberOfStudents(); curr++)
    {
        static int i = 0;
        cout << endl << "Student " << i+1 << ": " << *curr << endl;
        i++;
    }
}