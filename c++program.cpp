/*
AUTHOR--AGNES ABUGA
DATE-FEB 16 2025
REG NO--BSE-05-0197/2024
CONTEXT-VOLUME OF A CYLINDER
*/

#include<iostream>
#include<cmath>//for M_PI

using namespace std;
//function to calculate the volume of a cylinder
double cylinderVolume(double radius,double height){
    return M_PI*radius*radius*height*height;
    }
    int main(){
        double radius,height;
        //prompt the user for input
        cout<<"Enter the radius of the cylinder:";
        cin>>radius;
        cout<<"Enter the height of the cylinder :";
        cin>>height;
        //calculate and display volume
        double volume=cylinderVolume(radius,height);
        cout<<"The volume of the cylinder is:"<<volume;

        return 0;
    }







