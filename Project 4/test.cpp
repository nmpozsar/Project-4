#include <iostream>
#include <fstream>
using namespace std;

#include "Point.h"
void test_point();

int main()
{
    // test every constructor and all member functions
    test_point();


}

void test_point() 
{
    Point();
    
    Point pt1;

    pt1.setX(15);

    cout << "pt1 is: " << pt1 << endl << endl;

    ifstream input_file;
    input_file.open("data1.txt");
    pt1.read(input_file);
    cout << "pt1 is: " << pt1 << endl;

    Point pt2;
    pt2.setX(-10);
    cout << "pt2 is: " << pt2 << endl << endl;

    pt2.setY(10);
    cout << "pt2 is: " << pt2 << endl;
    pt2.setY(-10);
    cout << "pt2 is: " << pt2 << endl;

    Point pt3;
    pt3.read(input_file);
    cout << "pt3 is " << pt3 << endl;
    input_file.close();

    return;
}