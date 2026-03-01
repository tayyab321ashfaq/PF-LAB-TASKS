# include <iostream> 
using namespace std ;
main () { 
int number ,sum ;
sum = 0 ;
cout << "  ENTER 4 DIGIT NUMBER " ;
cin >> number ;
sum = sum + number%10 ;
number = number/10 ;
sum = sum + number%10 ;
number = number/10 ;
sum = sum + number%10 ;
number = number/10 ;
sum = sum + number%10 ;
cout << " THE SUM OF 4 DIGIT NUMBER IS " << sum ; 
}
