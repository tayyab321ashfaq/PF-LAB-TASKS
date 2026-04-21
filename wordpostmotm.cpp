#include <iostream> 
using namespace std ;
main () { 
    string word ;
    cout << " TAke word  : " ;

    cin >> word ;
    for ( int i = 0 ; word[i] != '\0' ;i++  )
   { cout << word[i]<< " found at position "<<i+1<<endl ;} 
    

}


