#include <iostream> 
using namespace std ; 
main ( ) {
 int salary , laptop ,month ,advance ;
salary = 10000;
laptop = 50000;
month = 6 ; 
advance = 50 ; 
int money = salary*0.5*6 ;
cout << " total money have " << money <<endl; 
if ( money > laptop ) 
{ cout <<" He can buy laptop for his son " ;} 
if ( money < laptop ) 
{ cout<< " he can,t buy laptop for his son "<< endl ; 
int monthreq = laptop/salary ;
cout  << " month required for laptop " << monthreq ; }
}