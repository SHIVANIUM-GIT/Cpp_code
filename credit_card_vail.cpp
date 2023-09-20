/*
The Luhn algorithm, also known as the "modulus 10" or "mod 10" algorithm,
is a simple checksum formula used to validate a variety of identification numbers,
such as credit card numbers, IMEI numbers,
and more. It's often used to catch errors in data entry or transmission.

logical
1.Starting from the rightmost digit (the least significant digit) and moving left, double the value of every second digit.
    If doubling a digit results in a number greater than 9, subtract 9 from the product.

2. Add up all the individual digits of the number, including those that were not doubled.

3.If the total sum is divisible by 10 (i.e., the modulo 10 result is 0), then the number is valid according to the Luhn algorithm.
*/

#include <iostream>

int getdigi(const int number)
{

    return number % 10 + (number / 10 % 10);
}

int sumOddDigit(const std::string cardnumber)
{
    int sum = 0;

    for (int i = cardnumber.size() - 1; i >= 0; i -= 2)
    {
        sum += (cardnumber[i] - '0');
    }

    return sum;
}

int sumEvenDigit(const std::string cardnumber)
{
    int sum = 0;

    for (int i = cardnumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getdigi((cardnumber[i] - '0') * 2);
    }

    return sum;
}

int main()
{
    std::string CardNumber;
    int result = 0;

    std::cout << "Enter you card # :";
    std::cin >> CardNumber;

    result = sumEvenDigit(CardNumber) + sumOddDigit(CardNumber);

    if (result % 10 == 0)
    {
        std::cout << CardNumber << " is vaild ";
    }
    else
    {

        std::cout << CardNumber << " is not  vaild ";
    }
    return 0;
}