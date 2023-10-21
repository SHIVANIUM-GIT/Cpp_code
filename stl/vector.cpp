#include <iostream>
#include <vector>

int main() {
    // Declare and initialize a vector with two elements using push_back and emplace_back
    std::vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // Declare a vector of integers with 5 elements (default-initialized to 0)
    std::vector<int> v1(5);

    // Declare a vector of integers with 5 elements, all initialized to 100
    std::vector<int> v2(5, 100);

    // Create a copy of v2 called v3
    std::vector<int> v3(v2);

    // Using iterators
    std::vector<int>::iterator it = v2.begin();
    it++;
    std::cout << *it << " "; // Output: 100

    it = it + 2;
    std::cout << *it << " "; // Output: 100

    // Accessing elements
    std::cout << v2[0] << " "; // Output: 100
    std::cout << v2.at(0) << " "; // Output: 100

    // Access the last element using back()
    std::cout << v2.back() << " "; // Output: 100

    // Iterating over a vector using an iterator
    std::vector<int> rex = {1, 2, 3, 4, 5};
    for (std::vector<int>::iterator inc = rex.begin(); inc != rex.end(); ++inc) {
        std::cout << *inc << " "; // Output: 1 2 3 4 5
    }

    // Iterating using auto
    for (auto inc = rex.begin(); inc != rex.end(); ++inc) {
        std::cout << *inc << " "; // Output: 1 2 3 4 5
    }

    // Iterating using a range-based for loop
    for (auto it : v) {
        std::cout << it << " "; // Output: 1 2
    }

    // Using the erase function to remove elements
    v.erase(v.begin() + 1); // Remove the second element
    std::cout << std::endl;
    for (auto element : v) {
        std::cout << element << " "; // Output: 1
    }

    // Using the insert function to add elements
    std::vector<int> v4(2, 100);
    v4.insert(v4.begin(), 300); // Insert 300 at the beginning
    std::cout << std::endl;
    for (auto element : v4) {
        std::cout << element << " "; // Output: 300 100 100
    }

    v4.insert(v4.begin() + 1, 2, 5); // Insert two 5s after the first element
    std::cout << std::endl;
    for (auto element : v4) {
        std::cout << element << " "; // Output: 300 5 5 100 100
    }

    // Insert elements from another vector (copy) into v4
    std::vector<int> copy(2, 50);
    v4.insert(v2.begin(), copy.begin(), copy.end());

    // Print the size of v4
    std::cout << v4.size() << std::endl; // Output: 12

    // Remove the last element
    v4.pop_back();

    // Swap the contents of v4 with v
    v4.swap(v);

    // Clear the elements in v
    v.clear();

    // Check if v4 is empty
    std::cout << v4.empty(); // Output: 0 (false)

    return 0;
}
