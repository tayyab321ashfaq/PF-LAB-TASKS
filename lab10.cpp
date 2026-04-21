#include<iostream> 
using namespace std ;
main ()
{
    int num[5] = { 1,3,4,5,6} ;
     bool isspecial  = true ;

    for ( int i = 0 ; i < 5 ;i++)
    { if ( i%2 == 0 && num[i]%2 !=  0)
        { isspecial = false ;
        break;}
        else 
        if ( i%2 != 0 && num[i]%2 == 0)
        { isspecial = false ;}

    }
    if ( isspecial == true )
    cout << " the array is special ";
else 
cout << " the array is not special " ;
}