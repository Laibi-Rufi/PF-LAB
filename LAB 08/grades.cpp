#include<iostream>
using namespace std;
int main(){
	
	char grade;
	cout<<"Enter the grade (A,B,C,D,F) : ";
	cin>>grade;
	
	switch(grade){
		case 'A':
			cout<<"Excelent"<<endl;
			break;
		case 'B':
		    cout<<"Good"<<endl;
		    break;
		case 'C':
		    cout<<"Satisfactory"<<endl;
			break;	
		case 'D':
		    cout<<"Poor"<<endl;
			break;
		case 'F':
		    cout<<"Fail"<<endl;
		    break;
		deafault:
		cout<<"Invalid grade "<<endl;				
	}
	return 0;
}