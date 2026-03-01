# include <iostream> 
using namespace std ;
main ( ) { int sq ,w,h;

cout << " number of square meters i can paint whith this amount  == " ;
cin >> sq ;
cout << " width of wall " ;
cin >> w ;
cout << " height of wall " ;
cin >> h ; 
int singlewall = w*h ;
cout << " AREA OF SINGLE WALL = " << singlewall <<endl ;
int numwall  = sq/singlewall ;
cout << " number of walls i can paint within given amount of paint = "<< numwall ;
 
}
