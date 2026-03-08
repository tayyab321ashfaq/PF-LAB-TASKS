# include <iostream> 
using namespace std ;
main ( ) 
{char character ;
cout << " Enter any character " ;
cin >> character ;
if ( character == 'a'){ cout << " the character is vowel " ; }
 else if ( character == 'e'){ cout << " the character is vowel " ; }
else if(character == 'i'){ cout << " the character is vowel " ; }
else if ( character == 'o'){ cout << " the character is vowel " ; }
 else if ( character == 'u'){ cout << " the character is vowel " ; }
else if ( character <='9' ) { cout <<" the character is number " ;}  
else { cout << " the character is not number and vowel rather consonent " ; } 
}