//
//  Ex_04_05.cpp
//  Homework Assignment 4
//
//  Created by AJ Cendejas on 6/6/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include "Ex_04_05.h"
using namespace std;

//Constructor
Course::Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}

//Destructor
Course::~Course()
{
    delete[]students;
}

//Copy Constructor
Course::Course(const Course& course)
{
    courseName = course.courseName;
    numberOfStudents = course.numberOfStudents;
    capacity = course.capacity;
    students = new string[capacity];
}

//Functions
string Course::getCourseName() const
{
    return courseName;
}

void Course::addStudent(const string& name)
{
    if(numberOfStudents > capacity)
    {
        string* newCapacity = new string[2*capacity];
        for(int i = 0; i < capacity; i++)
        {
            newCapacity[i] = students[i];
        }
        newCapacity[numberOfStudents] = name;
        numberOfStudents++;
    }
    else
    {
        students[numberOfStudents] = name;
        numberOfStudents++;
    }
}

void Course::dropStudent(const string& name)
{
    for(int i = 0; i < capacity; i++)
    {
        if(students[i] == name)
            students[i] = "";
    }
    for(int i = 0; i < capacity; i++)
    {
        if(students[i] == "")
        {
            students[i] = students[i+1];
            students[i+1] = "";
        }
    }
}

string* Course::getStudents() const
{
    return students;
}

int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

void Course::clear()
{
    for(int i = 0; i < capacity; i++)
    {
        students[i] = "\0";
    }
}