/*
* * * * * * * * * 
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/

#include<iostream>

int main(){

    for (int i = 0; i < 10; i++)
    {
        for (int j = 10; j>=i; j--)
        {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
    

    return 0;
}