#include <iostream>

int main(){

    int a = 0;
    int b = 0;
    int c =0;

    int bigNum =0;

    std::cout << "Enter three numbers: " << std::endl;
    std:: cin >> a;
    std:: cin >> b;
    std:: cin >> c;

    if(a > b && a > c){
        bigNum = a;
    }else if (b > a && b > c){
        bigNum = b;
    }else {
        bigNum = c;
    }

    std::cout << "The biggest number is: " << bigNum << std::endl;


    return 0;

}