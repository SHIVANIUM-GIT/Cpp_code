#include <bits/stdc++.h>
#include <limits>

int main() {
    int choice;

    while (true) {
        std::cout << "Select an STL component to demonstrate:" << std::endl;
        std::cout << "1. Vector" << std::endl;
        std::cout << "2. Stack" << std::endl;
        std::cout << "3. Queue" << std::endl;
        std::cout << "4. Map" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        if (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1: {
                // Vector
                std::vector<int> vec;

                while (true) {
                    int element;
                    std::cout << "Enter an element for the vector (0 to exit): ";
                    if (!(std::cin >> element)) {
                        std::cout << "Invalid input. Please enter a number." << std::endl;
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }
                    if (element == 0) {
                        break;
                    }
                    vec.push_back(element);
                }

                std::cout << "Vector Elements: ";
                for (int num : vec) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            }
            case 2: {
                // Stack
                std::stack<int> st;

                while (true) {
                    int element;
                    std::cout << "Enter an element for the stack (0 to exit): ";
                    if (!(std::cin >> element)) {
                        std::cout << "Invalid input. Please enter a number." << std::endl;
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }
                    if (element == 0) {
                        break;
                    }
                    st.push(element);
                }

                std::cout << "Stack Elements (top to bottom): ";
                while (!st.empty()) {
                    std::cout << st.top() << " ";
                    st.pop();
                }
                std::cout << std::endl;
                break;
            }
            case 3: {
                // Queue
                std::queue<int> q;

                while (true) {
                    int element;
                    std::cout << "Enter an element for the queue (0 to exit): ";
                    if (!(std::cin >> element)) {
                        std::cout << "Invalid input. Please enter a number." << std::endl;
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }
                    if (element == 0) {
                        break;
                    }
                    q.push(element);
                }

                std::cout << "Queue Elements (front to back): ";
                while (!q.empty()) {
                    std::cout << q.front() << " ";
                    q.pop();
                }
                std::cout << std::endl;
                break;
            }
            case 4: {
                // Map
                std::map<std::string, int> m;

                while (true) {
                    std::string key;
                    int value;
                    std::cout << "Enter a key for the map (or type 'exit' to stop): ";
                    std::cin >> key;

                    if (key == "exit") {
                        break;
                    }

                    std::cout << "Enter a value for the key: ";
                    if (!(std::cin >> value)) {
                        std::cout << "Invalid input for the value. Please enter a number." << std::endl;
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }
                    
                    m[key] = value;
                }

                std::cout << "Map Elements (key-value pairs):" << std::endl;
                for (const auto& pair : m) {
                    std::cout << pair.first << " => " << pair.second << std::endl;
                }
                break;
            }
            case 5: {
                // Exit
                std::cout << "Exiting the program." << std::endl;
                return 0;
            }
            default:
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    }

    return 0;
}
