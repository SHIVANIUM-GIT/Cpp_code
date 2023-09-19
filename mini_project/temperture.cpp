#include <iostream>

double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    int choice;
    double temperature;

    std::cout << "Temperature Converter" << std::endl;
    std::cout << "1. Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Fahrenheit to Celsius" << std::endl;
    std::cout << "Enter your choice (1/2): ";
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temperature;
        double fahrenheit = celsiusToFahrenheit(temperature);
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << std::endl;
    }
    else if (choice == 2)
    {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temperature;
        double celsius = fahrenheitToCelsius(temperature);
        std::cout << "Temperature in Celsius: " << celsius << " °C" << std::endl;
    }
    else
    {
        std::cout << "Invalid choice. Please choose 1 or 2." << std::endl;
    }

    return 0;
}
