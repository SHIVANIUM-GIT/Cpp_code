//containers

#include<bits/stdc++.h>
int main(){

    //this is for the pair <int,int >
    std::pair<int, int>p ={1,3};
    std::cout<<"First number => "<<p.first<<std::endl;
    std::cout<<"Second number => "<<p.second<<std::endl;

    //this is for the nested pair property
    std::pair<int, std::pair<int, int>>r ={4,{5,6}};
    std::cout<<"First number  of the pair in pair => "<< r.first<<std::endl;
    std::cout<<"second' first number  of the pair in pair => "<< r.second.first<<std::endl;
    std::cout<<"second' second number  of the pair in pair => "<< r.second.second<<std::endl;


    //this is the array of pair
    std::pair<int, int> arr[] = {{7, 8}, {9, 10}, {11, 12}};
    std::cout << "First element of the array: " << arr[0].first << ", " << arr[0].second << std::endl;

    return 0;
}