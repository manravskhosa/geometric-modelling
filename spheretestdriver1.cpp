/*
 * SphereTestDriver1.cpp
 * 
 * Target Machine: 64-Bit Linux Ubuntu 22.04.1 LTS
 * Description: This program is a test driver for the Sphere class. It creates multiple spheres and tests their methods such as move, setSize, computeArea and displaySphere.
 * It also tests the intersect method to check if two spheres intersect or not.
 * Class Invariant: Radius (size) must not be negative
 * 
 * Author: Manrav Singh Khosa
 * Modification Date: Jan 13/2023
*/


#include <iostream>
#include <iomanip>
#include "Sphere.h"
#include "spheretestdriver2.cpp"

using namespace std;

int main() {

  Sphere s21 = Sphere(0,0,3);
  Sphere s22 = Sphere(5,20,10);

  s21.move(5,2);
  s22.setSize(5);
  
  cout << "s21.getX() = " << s21.getX() << endl;

  cout << "s21.getY() = " << s21.getY() << endl;

  cout << "s22.getSize() = " << s22.getSize() << endl;

  cout << "s22.computeArea() = " << setprecision(3) << s22.computeArea() << endl;

  testTwo();
  return 0;
}
