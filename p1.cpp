#include <iostream> 
using namespace std ;
main ( ) {
string country ;
float  ticket , discount  , payable;
cout << " the name of mlk " ;
cin >> country ; 
cout << " ticke price " ;
cin >> ticket ; 
if ( country == "ireland" ) 
{ cout << " the discount is 10  percent" ; 
discount = ticket*0.10 ; 
payable = ticket - discount ; 
cout << " payable amount " << payable<<"dollars" ;}
else 
{ cout << " the discount is 5 percent " ; 
discount = ticket*0.05 ; 
payable = ticket - discount ; 
cout << " payable amount " << payable<<"dollars" ;} 
}