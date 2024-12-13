#include<iostream>
using namespace std;

void number(){
	int a;
	cout<<"Enter a number : ";
	cin>>a;
    if (a>0){
    	cout<<"The number is positive "<<endl;
	}
	else{
		cout<<"The numbe is negative "<<endl;
	}
	if (a%2==0){
		cout<<"The number is even "<<endl;
	}
	else{
		cout<<"The number is odd "<<endl;
	}	
}
int main(){
	number();
}