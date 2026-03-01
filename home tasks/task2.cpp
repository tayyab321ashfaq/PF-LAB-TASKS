#include <iostream> 
using namespace std ; 
main ( ) 
{ int minu , fps ;
cout << " lenght of video in minutes " ; 
cin >> minu ; 
cout << " frames per second =" ; 
cin >> fps ; 
int second = minu* 60 ; 
int totalfps = second*fps ; 
cout << " total nuber of fps in video " << totalfps ;
} 