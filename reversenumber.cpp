// #include <iostream> 
// using namespace std ;
// main () { int n ;
//     cout << " ENTER THE SIZE OF ARRY ";
//     cin >> n ;

//    int num[n] ;
//    for ( int i = 0 ; i < n ; i++)
//    { cout << " enter number "<< i+1<< "  " ;
// cin >> num [ i] ; 
// for ( int j = 0 ;j< i ; j++ )
// { if( num [i] == num[j])  
// cout<< " the number is alredy present " ;
// } 
//    } 
// } for(int i = 0; i < n; i++) {

//     #include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[100];

    // Taking input from user
    for(int i = 0; i < n; i++) {

        cin >> arr[i];   // store number

        // checking previous numbers
        for(int j = 0; j < i; j++) {

            if(arr[i] == arr[j]) {
                cout << "Already Entered\n";
            }

        }
    }

    return 0;
}