#include<iostream>
using namespace std;
int main(){
	
	char num;
	cout<<"Enter the number : ";
	cin>>num;
	switch(num){
		case '1':
			cout<<"Deposit"<<endl;
			break;
		case '2':
		    cout<<"Withdraw"<<endl;
			break;
		case'3':
		    cout<<"Check Balance"<<endl;
			break;
		case'4':
		    cout<<"Exit"<<endl;
			break;
		default:
		    cout<<"Invalid Input";
									
	}
	return 0;
}
