#include <iostream>
#include <string>
#include <vector>

int main() {

    int array[] {1, 2, 3, 4, 5};

    int *ptr {array};

    std::cout <<"first element: " << *ptr << "\n";
    std::cout <<"second element: " << *(ptr + 1) << "\n";
    std::cout <<"third element: " << *(ptr + 2) << "\n";
    std::cout <<"fourth element: " << *(ptr + 3) << "\n";
    std::cout <<"fifth element: " << *(ptr + 4) << "\n";

    for (int i =0; i < (sizeof(array) / sizeof(array[0])); i++) {

        std::cout << *(ptr + i) << "\n";

    }



}