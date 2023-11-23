#include <iostream>

double celsiusToFahrenheit(double celsius)
{
    double fahrenheit;

    fahrenheit = (1.8 * celsius) + 32;
    return fahrenheit;
}

int main(){
    double celsius;

    std::cout << "Enter celsius temperature in degrees: ";
    std::cin >> celsius;
    std::cout << "Temperture in fahrenheit is: " 
              << celsiusToFahrenheit(celsius) << std::endl;

}