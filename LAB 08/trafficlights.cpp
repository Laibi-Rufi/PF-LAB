#include<iostream>
using namespace std;
int main(){
	
	char colour;
	cout<<"Enter a colour (R,G,Y) : ";
	cin>>colour;
	
	switch(colour){
		case 'R':
			cout<<"Stop"<<endl;
			break;
		case 'G':
		    cout<<"Go"<<endl;
			break;
		case 'Y':
		    cout<<"Slow down"<<endl;
		deafult:
		cout<<"Invalid colour";			
	}
	return 0;
}