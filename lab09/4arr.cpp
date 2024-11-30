#include<iostream>
using namespace std;
int main(){
	
	string arr[4][4]={
		              {"A","B","C","D"},
		              {"E","F","G","H"},
		              {"I","J","K","L"},
		              {"M","N","O","P"}          
	};
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
		cout<<arr[i][j]<<" ";
			cout<<endl;
	}
	
}