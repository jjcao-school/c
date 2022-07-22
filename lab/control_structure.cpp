#include <iostream> 
using namespace std;	
void elseif()
{
    int grade (50);

    if (grade < 60) {
        cout<<'F'<<endl;
    }
    else if (grade < 70) {
        cout<<'D'<<endl;
    }
    else if (grade < 80) {
        cout<<'C'<<endl;
    }
    else if (grade < 90) {
        cout<<'B'<<endl;
    }
    else 
        cout<<'A'<<endl;
}
void switch_fun()
{
     int grade = 85;

     int tempgrade = grade/10;
     switch(tempgrade) {
     case 10:
     case 9:
         cout << "The grade is A" << endl;
         break;
     case 8:
         cout << "The grade is B" << endl;
         break;
     case 7:
         cout << "The grade is C" << endl;
         break;
     case 6:
         cout << "The grade is D" << endl;
         break;
     default:
         cout << "The grade is F" << endl;
     }
}
int main() 
{
	//elseif();
    switch_fun();
    return 0;
}