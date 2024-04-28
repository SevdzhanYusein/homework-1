#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

   void max(const std::vector<int>& numbers) {
    if(numbers.empty()){
        std::cout << "No numbers entered!" << std::endl;
        return;
    }

    int max = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    std::cout << "Max number is:  " << max << std::endl;
   
}

void min(const std::vector<int>& numbers) {
    if(numbers.empty()){
        std::cout << "No numbers entered!" << std::endl;
        return;
    }

    int min = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] < min){
            min = numbers[i];
        }
    }
    std::cout << "Min number is:  " << min << std::endl;
   
}


int main(int argc, char** argv) {
    std::vector<int> numbers; 

    std::string option;
    int num; 

    if (argc >= 2) {option = argv[1];}
    while (std::cin >> num) {
        numbers.push_back(num);
    } 

    if (option == "-max"){
        max(numbers);
    }else if (option == "-min"){
        min(numbers);
    }else{
        std::cerr << "Argument error! " << std::endl;
        return 1;
    }


    return 0;
}