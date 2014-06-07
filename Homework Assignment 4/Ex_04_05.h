//
//  Ex_04_05.h
//  Homework Assignment 4
//
//  Created by AJ Cendejas on 6/6/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef __Homework_Assignment_4__Ex_04_05__
#define __Homework_Assignment_4__Ex_04_05__

#include <iostream>
#include <string>
using namespace std;

class Course
{
public:
    Course(const string& courseName, int capacity);
    ~Course();
    Course(const Course& course);
    string getCourseName() const;
    void addStudent( const string& name);
    void dropStudent( const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
    void clear();
    
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};

#endif /* defined(__Homework_Assignment_4__Ex_04_05__) */
