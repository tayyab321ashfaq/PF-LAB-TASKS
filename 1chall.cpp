# include <iostream> 
using namespace std ;
main ( ) 
{ int sale ;
cout << " TOTAL SALE " ;
cin >> sale ;
if ( sale <=5000) 
{ cout << " total discount is 5 % " <<endl;
float dis= 0.05*sale ; 
cout << " dicounted money " << dis << endl;
int payable = sale -dis ;
cout << " Money to be payed after discount " << payable ; } 

else  { cout << " total discount is 10 % "<<endl ; 
float dis = 0.10*sale ;
cout << " dicounted money " << dis<<endl;
int payable = sale -dis ;
cout << " Money to be payed after discount " << payable ;  
}  


} 
