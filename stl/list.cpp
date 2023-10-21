#include <iostream>
#include <list>

int main() {
    // Create an empty list of integers
    std::list<int> my_list;

    // Push elements to the back of the list
    my_list.push_back(1);
    my_list.push_back(2);

    // Emplace elements at the back of the list
    my_list.emplace_back(3);
    my_list.emplace_back(4);

    // Push elements to the front of the list
    my_list.push_front(0);
    my_list.push_front(-1);

    // Emplace elements at the front of the list
    my_list.emplace_front(-2);
    my_list.emplace_front(-3);

    // Check if the list is empty
    bool isEmpty = my_list.empty();
    std::cout << "Is the list empty? " << (isEmpty ? "Yes" : "No") << std::endl;

    // Iterate and print the elements using a range-based for loop
    for (const int& element : my_list) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Remove elements from the list
    my_list.pop_back(); // Removes the last element (4)
    my_list.pop_front(); // Removes the first element (-3)

    // Iterate and print the updated list
    for (const int& element : my_list) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    /*
        Is the list empty? No
        -3 -2 -1 0 1 2 3 4 
        -2 -1 0 1 2 3 
     */

    return 0;
}

