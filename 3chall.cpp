# include <iostream> 
using namespace std ;
main ( ) 
{int num1 ,num2 ;
char oper ;
cout << " Enter one number " ;
cin >> num1 ;
cout << " ENnter the operator " ;
cin >> oper ;
cout << " Enter second number " ;
cin >>num2;
if ( oper == '+' ) {
int ans = num1 -num2 ;
cout << " your answer is " << ans ;}

if ( oper == '-' ) {
int ans = num1 +num2 ;
cout << " your answer is " << ans ;}
if ( oper == '*' ) {
int ans = num1 %num2 ;
cout << " your answer is " << ans ;}
if ( oper == '%' ) {
int ans = num1 *num2 ;
cout << " your answer is " << ans ;} 
 }  


