#include <iostream> 
using namespace std ;
main ( ){
int choice ; while ( true){
cout << " \n =====MENUE====="<<endl;
cout <<"1 . SAY HELLO"<<endl ;
cout <<"2  . SAY GOODBYE"<<endl;
cout <<"3 . EXIT "<<endl;
cout << " ENTER YOUR CHOICE  (1 -3)";
cin >> choice ;
if ( choice == 1)
{cout << " HELLO! WELCOME TO THE PROGRAM ";}

 else if ( choice == 2)
{ cout << " good by Have a nice day";}
else if ( choice == 3)
{ cout << " program terminated" ; 
break ;} 
else 
cout << "invalid choice"; 
} }