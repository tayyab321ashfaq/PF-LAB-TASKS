#include <iostream> 
using namespace std ;
main ( ) {
float tem1,tem2 ;
cout << " temperature1  in degree  " ;
cin >> tem1 ; 
cout << " temperature2 in degree  " ; 
cin >> tem2 ;   
float diff = tem2-tem1 ;
if ( diff >10 ) 
{ cout << diff<<endl <<"difference is too big " ; 
}
else 
cout << " program end " ;

}