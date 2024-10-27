#include<iostream>
using namespace std;
int main(){
	
	float initialbalance;
	float depositedamount;
	float withdrawalamount;
	float afterdeposit;
	float afterwithdrawal;
	
	cout<<"Enter the initial balance : ";
	cin>>initialbalance;
	
	cout<<"Enter the deposited amount : ";
	cin>>depositedamount;
	
	cout<<"Enter the withdrawal amount : ";
	cin>>withdrawalamount;
	
	afterdeposit=(initialbalance+depositedamount);
	cout<<"Balance after deposit : "<<afterdeposit<<endl;
	
	afterwithdrawal=(afterdeposit-withdrawalamount);
	cout<<"Balance after withdrawal : "<<afterwithdrawal<<endl;
	
	return 0;
}