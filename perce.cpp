#include <iostream>
using namespace std ;
main ()
{ int n ;
    int c1 = 0 ,c2 = 0 , c3 = 0, c4 = 0 , c5 = 0 ; 
    cout << " ENTER total number of values within the range of 1000 ";
cin >> n ;
for ( int i = 1 ; i <= n ; i++)
{ int num ;
cout << " enter number =" ;
cin >> num ;
if ( num < 200)
c1++ ;
 else if ( num < 400)
c2++ ;
 else if ( num < 600)
c3++ ;
else if ( num < 800)
c4++ ;
else if ( num >800 )
c5++ ;
}
cout << "  percentages "<<endl ;

cout << " p1 =" << (c1*100.0)/n<<endl  ; 
cout << " p2 =" << (c2*100.0)/n<<endl  ; 
cout << " p3 =" << (c3*100.0)/n<<endl ; 
cout << " p4 =" << (c4*100.0)/n <<endl ; 
cout << " p5 =" << (c5*100.0)/n <<endl ; 


}