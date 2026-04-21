# include <iostream> 
using namespace std ;
main ()
{ int num ;
int count = 0 ;
cout << " enter number " ;
cin >> num ;
for (  ; num != 0 ; num = num/10 )
{count = count +1  ;}
cout << " total digits in a given number "<< count ;}