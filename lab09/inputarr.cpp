#include<iostream>
using namespace std;
int main(){
	
	int num1;
	int num2;
	
	cout<<"Enter the number of rows : ";
	cin>>num1;
	
	cout<<"Enter the number of columns : ";
	cin>>num2;
	
	string arr[num1][num2];
	
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++)
		cin>>arr[i][j];
	}
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++)
		cout<<arr[i][j]<<" ";
		cout<<endl;
	
	
}
	
}