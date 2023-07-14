#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 3;
    int* p= &i;
    *p = 4;
    cout << i << endl;

    // int a[]={3,4};
    // int b[2]={3,4};
    // int ce[2];
    // //int *p[] = {new int[5]};
    // int *pp = new int[5];

    // double d(5.5);
    // float f(5.5);
    // double *ptr = &d;
    // int n = d;
    // std::cout << n << endl;
    // std::cout << ptr <<',' << *ptr<< endl;
    return 0;
}

// void allocateArray(int* temp, const int length)
// {
//     //int temp[length];
//     temp[0] = 1;
//     temp[1] = 2;
//     cout << temp << endl;
//     cout << &temp[0] << endl;
//     //return temp;
// }

// int main()
// {
//     int i(2);
//     int tmp[i];
//     int *p=tmp;
//     allocateArray(tmp, i);
//     cout << p[0] << endl;
//     cout << p << endl;
//     cout << p[0] << endl;

//     return 0;
// }