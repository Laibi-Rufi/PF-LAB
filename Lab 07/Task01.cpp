#include<iostream>
using namespace std;
int main(){
	
	int size;
	
	cout<<"Enter the size of an array : ";
	cin>>size;
	
	int arr[size];
	
	for(int i=0;i<size;i++){
	
	cout<<"Enter value to store in an array :  ";
	
	cin>>arr[i];
}
	
	for(int i=0;i<size;i++){
		
		cout<<arr[i]<<endl;
	}
	
	
}