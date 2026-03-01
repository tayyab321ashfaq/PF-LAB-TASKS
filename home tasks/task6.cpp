#include <iostream> 
using namespace std ; 
main ( ) 
{ float weight , cost , size ; 
cout << " weight of bag in ponds =  ";
cin >> weight ;
cout << " cost of bag " ;
cin >> cost ;
cout << " the size that can be covered by a single bag " ;
cin >> size ;
float price =  cost / weight ;
cout << " price of fertilizer per pound " << price  << endl;
float qeemat = cost /size ; 
cout << " price of fertilizer per square foot " << qeemat ; 
} 