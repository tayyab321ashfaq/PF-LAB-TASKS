#include <iostream> 
using namespace std ;
main ( ){
int choice ;
cout << " \n =====MENUE====="<<endl;
cout <<"1 . SAY HELLO"<<endl ;
cout <<"2  . SAY GOODBYE"<<endl;
cout <<"3 . EXIT "<<endl;
cout << " ENTER YOUR CHOICE ";
cin >> choice ;
if ( choice == 1)
{cout << " HELLO! WELCOME TO THE PROGRAM ";}
if ( choice == 2)
{ cout << " good by Have a nice day";}
if ( choice == 3)
{ cout << " program terminated" ;}
else 
cout << "invalid choice"; }