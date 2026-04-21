# include <iostream> 
using namespace std ;
main ( )
{ int lenght ;
cout << " enter the lenght of series" ;
cin >>lenght ;
int n1 = 0 ;
int n2 = 1;
int next ;
cout << n1 << " "<< n2 ;
for ( int i = 0 ; i < lenght-2 ; i++ )
{
    next = n1 + n2 ;
    cout<< " " << next ;
    n1 = n2 ; 
    n2 = next ;
} }