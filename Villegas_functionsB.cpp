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
    
    double tested2; 
    computerArea(8,3, tested2); 
    cout <<  "answer should be 24" << endl;
    computerArea(7,6, tested2); 
    cout <<  "answer should be 42" << endl;
    
    double tested3, tested4; 
    computerArea(5, 9, tested3, tested4);
    cout <<  "answer should be 45, 28" << endl;
    computerArea(8, 7, tested3, tested4);
    cout <<  "answer should be 56, 30" << endl;
    
    double tested5, tested6; 
    stats(8, 2, 8, 5, tested5,  tested6);
    cout <<  "answer should be 5.75, 23" << endl;
    stats(7,9, 2, 4, tested5, tested6);
    cout <<  "answer should be 5.5, 22" << endl;
    
    double tested7, tested8; 
    calcAreaPerimeter(2.7, tested7, tested8);
    cout <<  "answer should be 16.956, 22.8906" << endl;
    calcAreaPerimeter(4.3, tested7, tested8);
    cout <<  "answer should be 27.004, 58.0586" << endl;
    
    assert(fabs(calcArea(7.3,8.9 ) - 64.97  ) < EPS);
    assert(fabs(calcArea(42.9,7.8 ) - 334.62 ) < EPS);

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
    double area;
    area = valA*valB;
    return area;  
}

void computerArea(double valA, double valB, double& valC){
   double height = valA;
   double width = valB;
   valC = height * width;
   cout << valC << endl;
}

void computerArea(double valA, double valB, double& valArea, double& valPerimeter){
    valArea = valA * valB;
    valPerimeter = (2*(valA)) + (valB*2);   
    cout  << valArea << " "<< valPerimeter << endl; 
}


void stats(double valA, double valB, double valC, double valD, double& valE, double& valF){
    valE = valA + valB + valC + valD/ 4;
    valF = valA + valB + valC + valD;
   cout << valE << " " << valF << endl;
}

void calcAreaPerimeter(double radius, double& area, double& perimeter){
    const double PI = 3.14;
    area = (2*PI)*radius;
    perimeter = PI*(radius*radius);
    cout << area << " " << perimeter << endl; 
}


double calcArea(double length, double width){
    double area;
    area = length*width;
    return area;
}


