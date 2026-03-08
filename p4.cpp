#include <iostream> 
using namespace std ;
main ( ) {
int nred ,nwhite ,ntulip ;
float red = 2.0;
float white = 2.1 ;
float tulip = 2.5 ;
cout << " number of red roses " ;
cin >> nred ; 
cout << " number of white roses " ; 
cin >> nwhite ; 
cout << " NUMBER OF TULIP ROSES " ; 
cin >> ntulip ;
float price = nred*red + nwhite*white + ntulip*tulip ; 
cout << " price of total flowers " << price  <<endl ; 
if ( price > 200) 
{ cout << " discount is 20 percent "<<endl  ; 
float discount = price * 0.20 ;
float payable = price - discount ; 
cout << " total payable amount after discount " << payable ;
} 
else cout << " total payable is " <<price ; 
}