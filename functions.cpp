 # include <iostream> 
 using namespace std ;
 void add(int num1,int num2 ) 
{ cout << " the sum of given both numbers "<< endl ;
int sum = num1 + num2 ;
cout << sum ; }
int main ()
 { int num1 ,num2  ;
 cout << " enter number1 " ;
cin >> num1 ;
cout << " enter number2 " ;
cin >> num2 ;
add(num1 ,num2 );
return 0 ;
}
