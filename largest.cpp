#include<iostream> 
using namespace std ;
main ()
{ int n ;
cout << "  how many resistances you have in ohm  " ;
cin >> n ;
float res [n] ;

for ( int i = 0 ;i <n ; i++ ){
cout << " enter resistance"<< i+1<< "  " ; 
cin >>res[i] ;}
float sum  = 0 ;

for ( int i =0;i<n; i++){
sum = sum + res[i] ;}
     cout << " The sum of resistances is  ="<< sum <<" ohm";  
}

