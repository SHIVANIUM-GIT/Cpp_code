#include <iostream>

std::string concatstring(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}
int main()
{
    std::string FirstName = "Shiv";
    std::string LastName = "Rathore";
    std::string FullName = concatstring(FirstName, LastName);

    std::cout << "hello =>"
              << " " << FullName;
    return 0;
}
