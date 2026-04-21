#include <iostream> 
using namespace std ;
main () { 
    string word ;
    cout << " Enter the word you want to enter " ;
    cin >> word ;
    char letter ;
    cout << " enter the letter you want to check " ;
    cin >> letter ;
    bool isfound = false ;
    for ( int i = 0 ; word[i] != '/0'; i++ )
    { if (word[i] == letter)
    isfound = true ;
break ;}
if ( isfound == true )
cout << " the given letter is present in the given word "<< endl ;
else 
cout << " the given letter is not present in the given word " ;

}


