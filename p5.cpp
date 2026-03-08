#include <iostream> 
using namespace std ;
main ( ) {
int holidays ; 
int freedays =127 ;
int workingdays = 63 ; 
cout << " number of holiday " ;
cin >> holidays ;
int totalmin = 30000 ;

int totaldays = 365 - holidays ;
float play = holidays*127 + totaldays*63 ; 
cout << " total time in a year owner have to play " << play ; 
int diff = totalmin - play ; 
cout << " difference of total mins and playtime owner have " <<diff ;
if ( play <= totalmin ) 
{ cout << " cat can sleeep " ;} 
else 
cout << " cat will run away " ;

}