#include<iostream>
using namespace std;
int main(){
	
	int sub,marks;
	int sum=0;
	
	cout<<"Enter the total number of subjects :";
	cin>>sub;

	
	for(int i=1;i<=sub;i++){
		 cout<<"Enter the obtained marks";
	     cin>>marks;
	     sum=sum+marks;
	}
	
	float average=sum/sub;
	cout<<"Average"<<average<<endl;
	
	if(average>=90 && average>=100){
		
		cout<<"Garde A"<<endl;
		
	}
	
	else if(average>=80 && average<=90){
		
		cout<<"Grade B"<<endl;
		
		
	}
	else if(average>=70 && average<=80){
		
		cout<<"Grade C"<<endl;
		
		
	}
	else if(average>=60 && average<=70){
		
		cout<<"Grade D"<<endl;
		
	}
	else{
	
	cout<<"Grade F"<<endl;
	
}
}