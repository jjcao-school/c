#include <iostream> 
#include <typeinfo>
using namespace std;	
int main() 
{
    int iSum = 4; float fSum = 4;  double dSum = 4;
    cout << "size of " << typeid(iSum).name() << ": " << sizeof(iSum) << endl;
    cout << typeid(fSum).name() << ": " << sizeof(fSum) << endl;
    cout << typeid(dSum).name() << ": " << sizeof(dSum) << endl;
    return 0; 	
}
