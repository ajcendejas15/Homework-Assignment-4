//
//  Ex_04_04.h
//  Homework Assignment 4
//
//  Created by AJ Cendejas on 6/6/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef __Homework_Assignment_4__Ex_04_04__
#define __Homework_Assignment_4__Ex_04_04__

#include <iostream>

class Rectangle2D
{
private:
    //Data Fields
    double x, y;
    double width, height;
    
public:
    //Get/Set Functions
    const int getX();
    const int getY();
    const void setX(double newX);
    const void setY(double newY);
    const int getWidth();
    const int getHeight();
    const void setWidth(double newWidth);
    const void setHeight(double newHeight);
    
    //Other Functions
    const double getArea();
    const double getPerimeter();
    const bool contains(double X, double Y);
    const bool contains(const Rectangle2D &r);
    const bool overlaps(const Rectangle2D &r);
    
    //Constructors
    Rectangle2D();
    Rectangle2D(double X, double Y, double Width, double Height);
};

#endif /* defined(__Homework_Assignment_4__Ex_04_04__) */
