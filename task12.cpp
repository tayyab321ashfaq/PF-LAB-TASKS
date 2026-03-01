#include<iostream>
using namespace std ;
main ( ) {
int popu , n  ;
cout << " the world population now = " ; 
cin >>popu ; 
cout << " the number babies produced by people in every month " ; 
cin >> n ; 
int months = 12*30 ; 
cout << " total months in three decades " << months << endl ; 
int bab = n*months ; 
cout << " total extra babies born in three decades " << bab <<endl ; 
int totalpopu = bab + popu ;
 cout << " total population after three decades " << totalpopu ; 
 
}