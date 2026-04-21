# include  <iostream> 
using namespace std ;
void time (int h ,int m  ) ;
int main ( )
 { int h , m ;
cout << " enter  hours  0 -23 " ;
cin >> h ;
cout << " entr minutes  0 - 59 " ;
cin >> m ;

time( h ,m) ;
 return 0 ;
} 
void time ( int h , int m )
{
    m = m + 15 ;
    if ( m > 60 ) 
    { h = h +m/60 ;
        m =m%60 ;
     } 
     h = h%24 ;
     if (h <10 )
     cout << "0" ;
    cout << h <<" : " ;
    if ( m<10 )
    cout <<"0";
cout <<m<<":" ;

}

    