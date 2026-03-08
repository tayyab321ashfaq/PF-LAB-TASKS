#include <iostream> 
using namespace std ;
main ( ) {
string fig ;
float area ;
cout << " type of figure " ; 
cin >> fig ;
int lenght , width ; 
if ( fig == "area" ) 
{cout << " the given side of figure " ;
cin >> lenght ; 
area = lenght*lenght ;
cout << " the area of given figure " << area ; }
if ( fig =="rectangle") 
{ cout << " lenght of figure " ;
cin >> lenght ; 
cout << " the width of figure ";
cin >> width ; 
area = lenght*width ;
cout << " the area of rectangle " <<area ;
} 
if ( fig =="circle" ) 
{ cout << " the radius of fig " ;
cin >> lenght ;
area = 3.14* lenght *lenght  ; 
cout << " the arear of circle " << area ; }  


}