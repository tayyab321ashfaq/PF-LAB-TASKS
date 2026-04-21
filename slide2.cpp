#include <iostream> 
using namespace std ;
main ()
{ string name [10] ;
 int roll [10] ;
 float gpa [ 10] ;
 int count  ;
 cout << " How may record you want to enter " ;
 cin >> count ;
 for ( int i = 0  ; i < count ; i++ )
 { cout << "enter   name  :" ;
cin >> name [i] ;
cout << "roll number " ;
cin >> roll[ i];
cout << "  ENTER GPA :" ;
cin >> gpa [i] ;}
cout << "Name " << " \t "<< " Roll number "<< " \t" << " GPA " << endl ;
for 
( int i = 0 ; i < count ; i++)
{ cout <<name[i] << " \t  "<<  roll[i]<< " \t " <<  gpa[i] << endl ; }
 }


