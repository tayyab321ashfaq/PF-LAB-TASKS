# include  <iostream> 
using namespace std ;
bool check ( int n1 ) ;
int main ( )
{ int num ;
cout << " enter a number " ;
cin >> num ;
 cout << check(num) ;
return 0 ;

}
bool check ( int n1 )
{ int orignal = n1 ;
    
    int  digit = 0;

int reverse =  0  ;
 while ( n1 > 0 )
 { digit = n1%10 ;
reverse = reverse*10 + digit ;
n1 = n1/10 ;}
if ( reverse == orignal  )
return true ;
else 
 return false ;



}