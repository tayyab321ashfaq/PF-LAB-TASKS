 #include <iostream>
 #include <cmath> 
 using namespace std ;
 int main ()
 { 
    int x ,dist,height ;
    cout << " Enter angle in degree  " ;
    cin >> x ;
    cout << "enter distance " ;
    cin >> dist ;
    
    cout << tan(x)<< "  is the angle in radian   " <<endl ;
    height = dist*tan(x) ;
    cout << height<< " is height " ;

    return 0 ;
 }