#include <iostream> 

#include <array>
// std::array<int, 5> myarray; // declare an integer array with length 5
// myarray = { 0, 1, 2, 3, 4 }; // okay
// myarray = { 9, 8, 7 }; // okay, elements 3 and 4 are set to zero!
//std::array<int, 5> myarray{ 0, 1, 2, 3, 4}; 

void printSize(int array[])
{
    std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
}

int main(){
    std::cout << "########## start" << std::endl;
    int array[] = { 4, 1, 2, 3, 5, 8, 13, 21 };
    std::cout << sizeof(array) << '\n'; // will print the size of the array
    printSize(array);
 
    return 0;
}
