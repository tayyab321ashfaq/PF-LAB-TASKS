#include <iostream> 
using namespace std ; 
main ( ) 
{ float placou, impcou ;
cout << " total imposters = " ; 
cin >> impcou ; 
cout << " total players " ;
cin >> placou ; 
float chance = 100 * (impcou /placou); 
cout << " chance of being imposter " << chance << "%" ; 
} 