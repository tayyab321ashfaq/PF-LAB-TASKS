# include <iostream> 
using namespace std ;
main ()
{ 
     int choice ; 
     while (true)
     {
cout<< " \n=====RESTURANT MANAGMENT SYSTEM ====="<<endl<<endl ;
cout << " 1. VIEW FOOD MENU "<<endl<<endl ;
cout << " 2. PLACE ORDER "<<endl<<endl ;
cout << " 3. VIEW ORDER STATUS "<<endl<<endl ;
cout << " 4. GENRATE BILL "<<endl<<endl ;
cout << " 5. CONTACT STAFF "<<endl<<endl ;
cout << " 6. EXIT "<<endl<<endl ;
cout << " ENTER YOUR CHOICE IN THIS SYSTEM  (1 - 6)";
cin >> choice ;
if ( choice == 1)
{cout << " YOU SELECTECD : VIEW FOOD MANUE " ;}
else if ( choice == 2)
{cout << " YOU SELECTECD :     PLACE ORDER" ;}
else if ( choice == 3)
{cout << " YOU SELECTECD :   ORDER STATUS " ;}
else if ( choice == 4)
{cout << " YOU SELECTECD : GENRATE BILL " ;}
else if ( choice == 5)
{cout << " YOU SELECTECD :   CONTACT STAFF " ;}
else if ( choice == 6)
{cout << " YOU SELECTECD : EXITING RESUTURANT MANAGMAENT SYSTEM THANKYOU ! " ; 
break ;}
} }