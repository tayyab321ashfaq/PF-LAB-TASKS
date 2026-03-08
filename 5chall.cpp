# include <iostream> 
using namespace std ;
main ( ) 
{int  age1, age2 ,age3 ;
string bro1 ,bro2 ,bro3 ;
cout << "age of bro1";
cin >> age1;
 cout << "age of bro2";
cin >> age2;
cout << "age of bro3";
cin >> age3;
cout << " name of brother1 " ; 
cin >> bro1 ;
cout << " name of brother " ; 
cin >> bro2 ;
cout << " name of brother3 " ; 
cin >> bro3 ;
if ( age1<age3) { 
if ( age1<age2) 
{ cout << " the younger brother is"<<bro1;} 
}
if ( age2<age1) {
if (age2<age3)
{cout << " the younger bhi is " <<bro2 ;}}
if ( age3<age2) {
if (age3<age1)
{cout << " the younger bhi is " <<bro3;}

}

}