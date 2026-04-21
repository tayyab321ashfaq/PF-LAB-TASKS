#include<iostream> 
using namespace std ;
main ()
{ int n ;
    cout << " enter the number of elements of array2 " ;
    cin >> n;
    int arr1[2] , arr2 [n];
    arr1[2] = { 3 ,4 };
    for ( int i = 0 ; i< n ; i++ ) 
    { cout << " enter number"<< i+1 << " of array 2" ;
    cin >> arr2[i] ;}
    int arr3[ 2+n];
    arr3[0] = arr1[0];
    for ( int i = 0 ;i < n; i++)
    { 
 arr3[i+1] = arr2[0];
}
arr3[n+1] = arr1[1] ;
for ( int i = 0 ; i < n+2 ; i++)
{cout <<arr3[i]; }



}

