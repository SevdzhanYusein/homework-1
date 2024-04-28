#include <iostream>
#include <iomanip>

int main(){

    double mass = 0;
    double height = 0;

    std::cout << "Enter body mass in kilograms: " << std::endl;
    std:: cin >> mass;
    std::cout << "Enter height in meters: " << std::endl;
    std:: cin >> height;

    double bmi = mass / (height*height);
    double bmiNew = 1.3*(mass/pow(height, 2.5));

    std:: cout << "The bmi is:  " << std::fixed << std::setprecision(2) << bmi <<std::endl;
    std:: cout << "The bmi with the new formula is: " << std::fixed << std::setprecision(2) << bmiNew << std::endl;



    return 0;
}