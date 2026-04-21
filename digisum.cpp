#include <iostream> 
using namespace std ;
main ()
{
    int sum = 0 ; 
    int digit ;
    int num ;
    cout << " take any anumber ";
    cin >> num ;
    for ( ; num != 0 ; num = num/10 )
  {  digit = num %10 ;
sum = sum + digit ;}
cout << "result = "<< sum ;


}