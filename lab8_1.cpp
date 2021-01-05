#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){		
	double PrevBalance,Interest,RInterest,Total,Payment,NewBalance;
	cout << "Enter initial loan: ";
	cin>>PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin>>Interest;
	RInterest=PrevBalance*(Interest/100);
	Total=RInterest+PrevBalance;
	cout << "Enter amount you can pay per year: ";
	cin>>Payment;
	NewBalance=Total-Payment;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int i=1;
	if(Total<=Payment){Payment=Total;NewBalance=0; 	cout << setw(13) << left <<i; 
	cout << setw(13) << left <<PrevBalance; 
	cout << setw(13) << left <<RInterest; 
	cout << setw(13) << left <<Total; 
	cout << setw(13) << left <<Payment;
	cout << setw(13) << left <<NewBalance;
	cout << "\n";}
	
	else{
	do{

	cout << setw(13) << left <<i; 
	cout << setw(13) << left <<PrevBalance; 
	cout << setw(13) << left <<RInterest; 
	cout << setw(13) << left <<Total; 
	cout << setw(13) << left <<Payment;
	cout << setw(13) << left <<NewBalance;
	cout << "\n";
	i++;

	PrevBalance=NewBalance;
	RInterest=PrevBalance*(Interest/100);
	Total=RInterest+PrevBalance;
	NewBalance=Total-Payment;
	if(Total<=Payment){Payment=Total;NewBalance=0; 	cout << setw(13) << left <<i; 
	cout << setw(13) << left <<PrevBalance; 
	cout << setw(13) << left <<RInterest; 
	cout << setw(13) << left <<Total; 
	cout << setw(13) << left <<Payment;
	cout << setw(13) << left <<NewBalance;
	cout << "\n"; break;}
	}while(NewBalance>=0);}

	
	return 0;
}
