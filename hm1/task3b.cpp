#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

int main(){

    double r = 0;
    double l = 0;
    double h =0;

    std::cout << "Enter radius of the shape: " << std::endl;
    std:: cin >> r;
    std::cout << "Enter full of water to a height: " << std::endl;
    std:: cin >> h;
    std::cout << "Enter the shape height: " << std::endl;
    std:: cin >> l;

    double section = M_PI*r*h;
    double volume = section*l;



    std::cout << "The volume is: " << std::fixed << std::setprecision(2) << volume << " cubic meters." << std::endl;
    

    return 0;

}