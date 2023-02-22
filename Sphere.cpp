/* 
 * Sphere.cpp
 *
 * Target Machine: 64-Bit Linux Ubuntu 22.04.1 LTS.1
 * 
 * Description: This file contains the implementation for the Sphere class defined in Sphere.h
 * Class Invariant: Radius (size) must not be negative
 * 
 * Functions can see if two spheres intersect, find areas, print, etc.
 * 
 * Author: Manrav Singh Khosa
 * Modification Date: Jan 13/2023
 */

#include <iostream>
#include "Sphere.h"
#include <tgmath.h>
using namespace std; 

Sphere::Sphere() : xPos(0), yPos(0), size(10){}

Sphere::Sphere(int x, int y, double r){
    xPos = x;
    yPos = y;
    size = r;
}

int Sphere::getX(){
    return xPos;
}

int Sphere::getY(){
    return yPos;
}

double Sphere::getSize(){
    return size;
}

void Sphere::move (int horiz, int vert){
    xPos += horiz;
    yPos += vert;
}

void Sphere::setSize(double r){
    if(r > 0){
        size = r;
    }
    else{
        size = 10;
    }
}

double Sphere::computeArea(){
    double area = 0;
    double pi = 2*acos(0.0);
    double squaredRadius = size*size;
    area = (squaredRadius*(pi));
    return area;
}

void Sphere::displaySphere(){
    cout << "x = " << xPos << ", y = " << yPos << ", radius = " << size << endl;
}

bool Sphere::intersect(Sphere c){
    double squareSpace = (c.xPos - xPos)*(c.xPos - xPos) + (c.yPos - yPos)*(c.yPos - yPos);
    double radiusCalculation = (c.size + size)*(c.size + size);
    if(squareSpace >= radiusCalculation){
        return 0;
    }
    else{
        return 1;
    }
}
