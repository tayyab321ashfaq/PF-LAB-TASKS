#include <iostream> 
using namespace std ;
  string alphabetcase (char n )
{ 
     if ( n == 'a')
    cout << " the letter  enterd by the user is small";
    else if ( n == 'A')
    cout << " the letter enterd by the user is capital ";
else  cout << " invalid operator " ;

}
 int main ()
 { char letter ;
cout << " enter a letter ";
cin >> letter ;

cout <<alphabetcase(letter ) ;
}