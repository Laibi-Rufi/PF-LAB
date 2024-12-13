#include<iostream>
using namespace std;

void sum(){
	int a,b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	int sum=0;
	sum=a+b;
	cout<<sum;
}
void sub(){
	int a,b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	int sub=0;
	sub=a-b;
	cout<<sub;	
}
void mul(){
	int a,b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	int mul=0;
	mul=a*b;
	cout<<mul;
}
void div(){
	int a,b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a,b;
	int div=0;
	div=a/b;
	cout<<div;
}
int main(){
	sum();
	cout<<"   Function Executed"<<endl;
	sub();
	cout<<"   Function Executed"<<endl;
	mul();
	cout<<"   Function Executed"<<endl;
	div();
	cout<<"   Function Executed"<<endl;
	}
	
	