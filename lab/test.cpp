#include <iostream> 
using namespace std;


class String {
private:
    char * str;  
public:
    static int ms_;
    // String () : str(NULL) { }	//构造函数, 初始化str为NULL
    // const char * c_str() { return str; }  
    // String& operator = (const char * s);
    // ~String( ){if(str)	delete [] str;};
};


int String::ms_=0;
int main()
{
    cout << String::ms_ << endl;
    return 0;
}

