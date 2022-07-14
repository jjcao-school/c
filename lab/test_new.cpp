#include <iostream> 
using namespace std;
class Inta{   
public:    
	Inta() { cout << "Constructing" << endl; }    
	~Inta() { cout << "Destructing" << endl; }
    //int operator[](int i)
};

void first_test(){
    int *pi = new int[2];
    cout << pi << endl;
    cout << &pi[0] << endl;
    Inta *pin = new Inta[2];
    cout << pin << endl;
    cout << &pin[0] << endl;
}

int main(int argc, char *argv[]) {    
    first_test();
    return 0;
}