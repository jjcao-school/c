// A Hello World program
# include <iostream> 
using namespace std;	

void fun2()
{
    cout << "fun2 begin" << endl;
    cout << "fun2 end" << endl;
}
void fun1()
{
    cout << "fun1 begin" << endl;
    fun2();
    cout << "fun1 end" << endl;
}
int main() 
{
    std::string phase = "Hello world";
    //std::string phase("Hello world");
    std::cout << phase << std::endl;
    //std::cout << "Hello, world!\n";
    int a(2);
    fun1();
    return 0; 	
}

