#include <iostream> 
using namespace std ;
main ()
{ int n , p , x ;
    int total ;
    int toy = 0 ;
int evenmon= 0 ;
int money = 0 ; 

cout << " LILL,S age   = ";
cin >> n ;
cout << " AMOUNT FROM  each S0LD TOY"; 
cin >> p ;
cout << " AMOUNT OF WASHING MACHINE ";
cin >> x ;
for ( int i = 1;i <= n ; i = i +1 )
{ if ( i%2 == 0)
    { evenmon = evenmon + 10 ;
        money = money + evenmon -1 ;

    
}
    else 
    {toy++ ;
         
   }
     
    
}
 total = money + (toy*p) ;

cout << " total money liili have " << total ;
if ( total >= x )
cout << " yes lilly can buy machine  ";
else 
cout << " not ";

}

