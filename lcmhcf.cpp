#include <iostream> 
using namespace std ;
  main ()
{int n1 ,n2 ,hcf ,lcm ;
    cout << " Enter  two numbers " ;
    cin >> n1; 
    cin >> n2 ; 
    for ( int i = 1 ; i <= n1 && i <= n2 ;i++)
    {if ( n1%i == 0 && n2%i == 0) 
    hcf = i ;
    lcm = n1*n2/hcf ; 


   
    }
    cout << " the HCF IS =" << hcf ;
    cout << " THE LCM IS ="<<lcm ;

}