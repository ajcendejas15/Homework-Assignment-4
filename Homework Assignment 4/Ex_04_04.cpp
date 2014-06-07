//
//  Ex_04_04.cpp
//  Homework Assignment 4
//
//  Created by AJ Cendejas on 6/6/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include "Ex_04_04.h"

const int Rectangle2D::getX() {return x;}
const int Rectangle2D::getY() {return y;}
const void Rectangle2D::setX(double newX)
{
    x = newX;
}
const void Rectangle2D::setY(double newY)
{
    y = newY;
}
const int Rectangle2D::getWidth() {return width;}
const int Rectangle2D::getHeight() {return height;}
const void Rectangle2D::setWidth(double newWidth)
{
    width = newWidth;
}
const void Rectangle2D::setHeight(double newHeight)
{
    height = newHeight;
}
//Other Functions
const double Rectangle2D::getArea()
{
    return width*height;
}
const double Rectangle2D::getPerimeter()
{
    return 2*width + 2*height;
}
const bool Rectangle2D::contains(double X, double Y)
{
    if((width/2 + x) >= X || (width/2 - x) <= X)
        return true;
    else if((height/2 + y) >= Y || (height/2 - y) <= Y)
        return true;
    else
        return false;
}
const bool Rectangle2D::contains(const Rectangle2D &r)
{
    if((r.width/2 + r.x) > (width/2 + x) || (r.x - r.width/2) < (x - width/2))
        return false;
    else if((r.height/2 + r.y) > (height/2 + y) || (r.y - r.height/2) < (y - height /2))
        return false;
    else
        return true;
}
const bool Rectangle2D::overlaps(const Rectangle2D &r)
{
    if((r.x - r.width/2) > (width/2 + x) || (r.x + r.width/2) < (x - width/2))
        return false;
    else if((r.y - r.height/2) > (height/2 + y) || (r.y + r.height/2) < (y - height/2))
        return false;
    else
        return true;
}
//Constructors
Rectangle2D::Rectangle2D()
{
    x = y = 0;
    width = height = 1;
}

Rectangle2D::Rectangle2D(double X, double Y, double Width, double Height)
{
    x = X;
    y = Y;
    width = Width;
    height = Height;
}
