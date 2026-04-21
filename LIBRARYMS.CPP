# include <iostream> 
using namespace std ;
main ()
{ 
     int choice ; 
     while (true)
     {
cout<< " \n=====LIBRARY MANAGMENT SYSTEM ====="<<endl<<endl ;
cout << " 1. ADD BOOK "<<endl<<endl ;
cout << " 2. VIEW BOOK "<<endl<<endl ;
cout << " 3. ISSUE BOOK "<<endl<<endl ;
cout << " 4. BORROW BOOK "<<endl<<endl ;
cout << " 5. CONTACT LIBRARIAN STAFF "<<endl<<endl ;
cout << " 6. EXIT "<<endl<<endl ;
cout << " ENTER YOUR CHOICE IN THIS SYSTEM  (1 - 6) = ";
cin >> choice ;
if ( choice == 1)
{cout << " YOU ADDED BOOK " ;}
else if ( choice == 2)
{cout << " YOU VIEWED BOOK " ;}
else if ( choice == 3)
{cout << " YOU ISSUED BOOK  " ;}
else if ( choice == 4)
{cout << " YOU BORROWED BOOK " ;}
else if ( choice == 5)
{cout << " YOU CALLED STAFF" ;}
else if ( choice == 6)
{cout << " YOU  ARE EXITING LIBRARY  MANAGMAENT SYSTEM THANKYOU ! " ; 
break ;}
} }