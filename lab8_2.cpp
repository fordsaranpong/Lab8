#include<iostream>
using namespace std;
void 	printO(int x,int y){
	int a=x,b=y;
	if(a>0&&b>0){
		int i,j;

		for( i=0;i<x;i++){
		
			for( j=0;j<y;j++){		
			cout<<"O";
			}cout<<"\n";}}
			
			
	else{cout<<"Invalid input";
	}		
	}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
