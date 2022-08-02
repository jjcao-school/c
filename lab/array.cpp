#include <iostream> 
#include <array>
using namespace std;
// std::array<int, 5> myarray; // declare an integer array with length 5
// myarray = { 0, 1, 2, 3, 4 }; // okay
// myarray = { 9, 8, 7 }; // okay, elements 3 and 4 are set to zero!
//std::array<int, 5> myarray{ 0, 1, 2, 3, 4}; 

void init()
{
    char arr1[10];
    int arr2[2] = {1, 2};
    double arr3[] = {1.2, 3.3};

}
void printSize(int array[]){
    int* parr; int& arr=array[0];
    cout << typeid(array).name() << ": " << sizeof(array) << endl;
    cout << typeid(parr).name() << ": " << sizeof(parr) << endl;
    cout << typeid(arr).name() << ": " << sizeof(arr) << endl;
}

void reserve()
{
    vector<int> intvector;
    // intvector.reserve(50);

    for (int i=0; i<50; i++){
        intvector.push_back(i*i);
        cout << intvector[i] << endl;
        cout << "capacity: " << intvector.capacity() << endl;
    }
}
// Demonstrates how in iterating outside of an arry in C++, can change data in other places
// not work in my setting
int danger(){
    int myarray[] = {2, 4};
    int otherdata[]={777, 777};
    for (int i=0; i<4; i++){
        myarray[i]=0;
        cout <<"myarray["<< i << "]=" << myarray[i]<< endl;
        cout << "add:" << &myarray[i] << endl;
    }
    for (int i=0; i<2; i++){
        cout <<"otherdata["<< i << "]=" << otherdata[i]<< endl;
        cout << "add:" << &otherdata[i] << endl;
    }
    return 0;
}
int main(){
    danger();
    int array[] = { 4, 1, 2, 3, 5, 8 };
    cout << typeid(array).name() << ": " << sizeof(array) << endl;
    printSize(array);
    return 0;
}

