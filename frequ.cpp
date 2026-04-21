#include <iostream> 
using namespace std ;
 int main ()
{
    int count = 0 ;
    int num ;
     int target ; 
    cout << " enter a number ";
    cin >> num ;
    cout << " enter a digit  whose frequncy is to be determined";
    cin >> target ;
    for ( ; num != 0 ; num = num/10 )
    {  int  digit = num%10 ;
    if ( target == digit )
count = count +1 ;
}
cout << "frequncy of given digit " << count ; 
return 0 ;


}