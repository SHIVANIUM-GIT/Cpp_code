/*
1 
2 2 
3 3 3 
*/
#include<iostream>

int main(){

    for (int i = 1; i <=10; i++)
    {
       for (int j = 1; j <=i; j++)
       {
        std::cout<<i<<" ";
       }
       std::cout<<std::endl;
    }
    
    return 0;
}