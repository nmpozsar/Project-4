/**
 * Point.cpp
 *
 * EECS 183, Winter 2017
 * Project 4: CoolPics
 * Jacob Fedrigon
 * Nicholas Pozsar
 * nmpozsar
 * jacobfed
 *
 * <#Description#>
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"


Point::Point() {

    x = 0;
    y = 0;

}

Point::Point(int xVal, int yVal) {


    x = checkRange(xVal);
    y = checkRange(yVal);

}

void Point::setX(int xVal) {
    x = checkRange(xVal);

    return;
}

int Point::getX() {

    return x;

}

void Point::setY(int yVal) {
    y = checkRange(yVal);
    return;

}

int Point::getY() {

    return y;
}

void Point::read(istream& ins) {

    char trash;

    ins >> trash >> x >> trash >> y >> trash;

    x = checkRange(x);
    setX(x);
    y = checkRange(y);
    setY(y);
    return;
}

void Point::write(ostream& outs) {

    outs << "(" << x << "," << " " << y << ")";
    return;
}

int Point::checkRange(int val) {

    if (val >= 0 && val < DIMENSION)
    {
        return val;
    }
    else if (val < (DIMENSION - 1) - val)
    {
        return 0;
    }
    else
    {
        return (DIMENSION - 1);
    }

}



// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}

