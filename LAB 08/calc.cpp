#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter the two numbers : ";
	cin>>num1>>num2;
	
	char opr;
	cout<<"Enter the operation you want to perform (+,-,*,/) : ";
	cin>>opr;
	
	switch(opr){
		case '+':
			cout<<"The sum of the two numbers is : "<<num1+num2<<endl;
			break;
	    case '-':
			cout<<"The difference of the two numbers is : "<<num1-num2<<endl;
			break;
		case '*':
			cout<<"The product of the two numbers is : "<<num1*num2<<endl;
			break;
		case '/':
			cout<<"The division of the two numbers is : "<<num1/num2<<endl;
			break;
		default:
		cout<<"Invalid Operation";
			
			
	}
	return 0;
}