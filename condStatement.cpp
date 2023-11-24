#include <iostream>

bool isAnEvenNumber(int num)
{
    if((num % 2) == 0){
        return true;
    }
    return false;
}

int main()
{
    int num;

    std::cout << "Enter an even number ";
    std::cin >> num;
    
    if (isAnEvenNumber(num))
    {
        std::cout << num << " is an even number" << std::endl;
    }else{
        std::cout << "That was not an even number";
    }
}