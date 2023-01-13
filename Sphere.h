/* 
 * Sphere.h
 *
 * Target Machine: 64-Bit Linux Ubuntu 22.04.1 LTS
 * 
 * Description: This class models a Sphere with a set radius (size) and center coordinate (xPos, yPos)
 * Class Invariant: Radius (size) must not be negative
 * 
 * Functions can see if two spheres intersect, find areas, print, etc.
 * 
 * Author: Manrav Singh Khosa
 * Modification Date: Jan 13/2023
 */

#pragma once

class Sphere {
private: 
    int xPos; 
    int yPos; 
    double size;

public: 
    Sphere();
    Sphere (int xPos, int yPos, double size);
    int getX();
    int getY();
    double getSize();
    void move (int horiz, int vert);
    void setSize(double r);
    double computeArea();
    void displaySphere();
    bool intersect(Sphere c);
};
