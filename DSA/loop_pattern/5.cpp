// #include <iostream>
// using namespace std;

// int main() {

//     int space, rows;

//     cout <<"Enter number of rows: ";
//     cin >> rows;

//     for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
//         for(space = 1; space <= rows-i; ++space) {
//             cout <<"  ";
//         }

//         while(k != 2*i-1) {
//             cout << "* ";
//             ++k;
//         }
//         cout << endl;
//     }    
//     return 0;
// }

#include <iostream>

void reverseStarTriangle(int n) {
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            std::cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n = 0;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    reverseStarTriangle(n);

    return 0;
}
