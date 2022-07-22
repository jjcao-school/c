#include <iostream> 
using namespace std;
void swapv( int a, int b){
    int tmp;
    tmp = a; a = b; b = tmp;
}
void swapr( int & a, int & b){
    int tmp;
    tmp = a; a = b; b = tmp;
}

int main(){
    int n1(1), n2(2);
    swapv(n1,n2);
    cout << n1 << ", " << n2 << endl;
    swapr(n1,n2);
    cout << n1 << ", " << n2 << endl;
    return 0;
}


 