// Name: Sarah Villegas 
// October 15, 2015
// Functions B


#include <iostream>
#include <cassert>
#include <cmath>
using namespace std; 

// convert feet to inches 
double feetToInches(double val);

void feetToInches(double val1, double& val2);

// calculate the area 
double computeRectangle(double valA, double valB);

void computerArea(double valA, double valB, double& valC);

// calculates area and the perameter 
void computerArea(double valA, double valB, double& valArea, double& valPerimeter);

// gives average and sum of the perameters 
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF);

// calculates area of the circle 
void calcAreaPerimeter(double radius, double& area, double& perimeter);

//calculates area of a rectangle
double calcArea(double length, double width);


int main(){

    double const EPS = .0001; 

    assert(fabs(feetToInches(10.2) - 122.4) < EPS );
    assert(fabs(feetToInches(6.8) - 81.6) < EPS  );
    cout << "You got feet to inches to work" << endl;
    
    double tested; 
    feetToInches(8, tested); 
    cout <<  "answer should be 96" << endl;
    feetToInches(12, tested); 
    cout <<  "answer should be 144" << endl;
    
    assert(fabs(computeRectangle( 7.6,9.3 ) - 70.68 ) < EPS);
    assert(fabs(computeRectangle( 11.2, 7.2 ) - 80.64) < EPS);
    
    //assert(fabs(calcArea(, ) ) < EPS);
    //assert(fabs(calcArea(, ) ) < EPS);

    return 0; 
} 

double feetToInches(double val){
    double feet;
    const double inches = 12.0;
    feet = val * inches;
    return feet;
}

void feetToInches(double val1,  double& val2){
   
    const double inches = 12.0;
    double answer; 
    answer = val1 * inches;
    cout << answer << endl;
}

double computeRectangle(double valA, double valB){
    int area;
    area = valA*valB;
    return area;  
}

void computerArea(double valA, double valB, double& valC){
   double height = valA;
   double width = valB;
   valC = height * width;
   
}

void computerArea(double valA, double valB, double& valArea, double& valPerimeter){
    valArea = valA * valB;
    valPerimeter = (2*(valA)) + (valB*2);
   
}


void stats(double valA, double valB, double valC, double valD, double& valE, double& valF){
    valE = valA + valB + valC + valD/ 4;
    valF = valA + valB + valC + valD;
   
}

void calcAreaPerimeter(double radius, double& area, double& perimeter){
    const double PI = 3.14;
    area = (2*PI)*radius;
    perimeter = PI*(radius*radius);
    
}


double calcArea(double length, double width){
    double area;
    area = length*width;
    return area;
}


