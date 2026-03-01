# include <iostream> 
using namespace std ; 
main ( ) 
{ string name ;
float adult ,child ,percent, numadult,numchild ;
cout << " MOVIE NAME " ; 
cin >>name ;
cout << " ticket price for child " ; 
cin >> child ;
cout << " ticket price for adult " ; 
cin >> adult ;
cout <<" total tickets bought by adults " ;
cin >> numadult;
cout <<" total tickets bought by child " ;
cin >> numchild;
cout << " percentage of total income donated for charrity " ;
cin >> percent;
float income = child*numchild + adult*numadult ;
float percentagemoney = (percent/100)*income ;
cout << " total money before donation "  << income<<endl;
cout << " money for donation " << percentagemoney <<endl;
float netincome = income - percentagemoney ;
cout << " NET income after donation " << netincome ;
}


