# include <iostream> 
using namespace std ;
main ()
{ 
     int choice ; 
     int n1 , n2 ;
     cout << " enter number one ==";
     cin >> n1 ;
     cout << " number two  enter please " ;
     cin >> n2 ;

     while (true)
     {
cout<< " \n=====SIMPLE CALCULATOR ====="<<endl<<endl ;
cout << " 1. ADDITION  "<<endl<<endl ;
cout << " 2. SUBTRACTION"<<endl<<endl ;
cout << " 3. DIVISION "<<endl<<endl ;
cout << " 4. MULTLIPLICATION "<<endl<<endl ;
cout << " 5. CLEAR STAFF "<<endl<<endl ;
cout << " 6. EXIT "<<endl<<endl ;
cout << " ENTER YOUR CHOICE  (1 - 6)";
cin >> choice ;
if ( choice == 1)
{cout << n1+n2 ;}
else if ( choice == 2)
{cout <<  n1-n2;}
else if ( choice == 3)
{cout << n1/n2 ;}
else if ( choice == 4)
{cout << n1*n2 ;}
else if ( choice == 5)
{cout << " SCREEN CLEARED ";}
else if ( choice == 6)
{cout << " EXITING CALCULATOR GOOD BYE ! " ; 
break ;}
} }