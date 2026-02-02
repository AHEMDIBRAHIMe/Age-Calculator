#include <iostream>
#include <string>
using namespace std;

int main()
{
string firstneme ;
string lastneme ;
int  age ;
int birthyear ;
cout <<"enter your first neme " << endl ;
cin >> firstneme;
cout << "enter your last neme " << endl ;
cin >> lastneme ;
cout << " enter your age " << endl ;
cin >> age ;
birthyear = 2026 -age ;
cout << "--------------------------------" << endl ;
cout << "welcome ," << firstneme << "" << lastneme << endl ;
cout <<"you are " << age << "years old" << endl ;
cout << "you were born around :" << birthyear << endl ;
cout << "------------------------------------" << endl ;

    return 0;
}
