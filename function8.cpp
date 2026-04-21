 #include <iostream>
 #include <cmath> 
 using namespace std ;
 int main ()
 { 
    int a ,b,c ,d = 2 ;
    cout << " b = " ;
    cin >> b ; 
    cout << "a= " ;
    cin >>a ;
    cout << "c= "  ;
    cin >>c ;
   
    int disc = pow ( b ,d ) - 4*a*c ; 
    cout << disc <<endl ;
    

    
    
    float root1 ,root2 ; 
    

    if (disc == 0)
    {float q = sqrt(disc) ;
    root1 = (-b)/(2*a) ;
     root2 = root1 ;}

     else if ( disc > 0)
     {float q = sqrt(disc) ; 
        root1 = (-b + q) /(2*a ); 
    root2 =( -b - q)/(2*a ); }

    else  if ( disc < 0 )
    {float q = sqrt(-disc) ;
     root1 = (-b/2*a) +( q/2*a) ;
     root2 = (-b/2*a )- (q/2*a) ;}
     cout <<" root one " <<root1 ;
     cout << " root two "<<root2 ;
     return 0 ;



    
 }