#include <iostream>
int main()
{
    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin >> std::ws, name);

    name.append("@gmail.com");
    std::cout << name << '\n';

    std::cout << name.at(0) << '\n';

    std::cout << name.insert(0, "HI") << '\n';

    std::cout << name.find(" ") << '\n';

    if (name.length() > 12)
    {
        std::cout << "you name can not be over 12 character " << std::endl;
    }
    else
    {
        std::cout << "you name under 12 character " << std::endl;
    }

    return 0;
}