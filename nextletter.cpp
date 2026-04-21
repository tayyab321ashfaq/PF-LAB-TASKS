#include <iostream> 
using namespace std ;
main () { int n ;
    cout << " ENTER THE SIZE OF ARRY ";
    cin >> n ;

   int num[n] ;
   for ( int i = 0 ; i < n ; i++)
   { cout << " enter number "<< i+1<< "  " ;
cin >> num [ i] ;}
cout << " THE reverse order of given number " <<endl;
for ( int i = n-1 ; i >=0 ;i--)
{ cout << num [i] << "  ";}
   }




