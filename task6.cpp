# include <iostream>
using namespace std ;
main ( ) 
{string name ;
cout << " Your name is : " ;
cin >> name ;
float matric , inter , ecat ;
cout << " Marks in matric : " ;
cin >> matric ;
float matricper = (matric / 1100)*100;
cout << " marks in inter " ;
cin >> inter ;
float interper = (inter/1200)*100;
 
cout << " marks in ecat " ;
cin >> ecat ;
float ecatper = (ecat /400)*100 ;

float agregate = (matricper*0.10)+ (interper*0.40)+ (ecatper*0.50) ;

cout << " Your aggregate is " << agregate ;

}  
