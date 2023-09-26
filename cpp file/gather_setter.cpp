#include <iostream>

class temperture
{
private:
    int temp = 100;

public:
    temperture(int temperture)
    {
        this->temp = temperture;
    }
    void settemperture(int temperture)
    {
        if (temperture < 0)
        {
            this->temp = 0;
        }
        else if (temperture > 0)
        {
            this->temp = 10;
        }
        else
        {
            this->temp = temperture;
        }
    }
    int gettemperture()
    {
        return temp;
    }
};

int main()
{
    temperture temperture(120);

    // temp1.settemperture(102);

    std::cout << "the temperture is => " << temperture.gettemperture();
    return 0;
}