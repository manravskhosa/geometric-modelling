/*
 * SphereTestDriver2.cpp
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
#include "Sphere.h"

using namespace std;

inline int testTwo() {
  Sphere s1 = Sphere();
  Sphere s2 = Sphere(0,4,10);
  Sphere s3 = Sphere(0,4,14.1);
  Sphere s4 = Sphere(0,11,0.2);
  
  cout << "s1 : ";
  s1.displaySphere();
  cout << "s2 : ";
  s2.displaySphere();
  cout << "s3 : ";
  s3.displaySphere();
  cout << "s4 : ";
  s4.displaySphere();
  
  if (s1.intersect(s2))
    cout << "s1 intersects s2" << endl;
  else
    cout << "s1 does not intersect s2" << endl;

  if (s1.intersect(s3))
    cout << "s1 intersects s3" << endl;
  else
    cout << "s1 does not intersect s3" << endl;

  if (s1.intersect(s4))
    cout << "s1 intersects s4" << endl;
  else
    cout << "s1 does not intersect s4" << endl;	

  return 0;
}

