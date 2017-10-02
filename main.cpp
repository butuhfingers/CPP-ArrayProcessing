#include <iostream>

int main() {
    //Create the array
    int integerArray[2000];

    //Go through the array and create a random number for each
    int i = -1;
    while(++i < 2000){
        integerArray[i] = rand() % 2000;
        std::cout << "Intger: " << integerArray[i] << std::endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}