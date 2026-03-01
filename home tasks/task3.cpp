#include <iostream> 
using namespace std ; 
main ( ) 
{ int iv ,fv ,t , acc ;
cout << " initial velocity of car =" ; 
cin >> iv ; 
cout << " acceleration of car =";
cin >> acc ; 
cout << " Time taken =";
cin >> t ;
fv = acc*t + iv ;
cout << " final velocity of car = " << fv;    
} 