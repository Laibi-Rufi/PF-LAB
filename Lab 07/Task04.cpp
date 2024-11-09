#include<iostream>
using namespace std;
int main(){
	
	const int num=10;
	int numbers[num];
	
	for(int i=0;i<num;i++){
		
		cout<<"Enter the "<<(i+1)<<" number :";
		cin>>numbers[i];
		
	}
	for(int i=num-1;i>=0;i--){
		
		cout<<numbers[i]<<endl;
	}
	return 0;
}