#include<iostream>
using namespace std;
int main(){
	
   const int numofintegers=7;
   int integer[numofintegers];
   
   for(int i=0;i<numofintegers;i++){
   	
   	cout<<"Enter the integer number "<<(i+1)<<" : ";
   	cin>>integer[i];
   	
   
   
   if(integer[i]%5==0){
   	
   	cout<<"The integer "<<(i+1)<<" is the multiple of 5 "<<endl;
   }
   else
   cout<<"The integer "<<(i+1)<<" is not the multiple of 5 "<<endl;
   }
	return 0;
}