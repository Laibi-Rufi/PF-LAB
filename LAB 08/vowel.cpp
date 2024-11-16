#include<iostream>
using namespace std;
int main(){
	char letter;
	cout<<"Enter a letter : ";
	cin>>letter;
	letter=tolower(letter);
	
	switch(letter){
		
		case 'a':
			cout<<" a is a vowel "<<endl;
			break;
	    case 'e':
		    cout<<" e is a vowel "<<endl;
		    break;
		case 'i':
		     cout<<" i is a vowel "<<endl;
			 break;
		case 'o':
		     cout<<" o is a vowel "<<endl;
			 break;
		case 'u':
		     cout<<" u is a vowel "<<endl;
		default:
		     cout<<"consonant";
			 	 	 	 	 			
	}
	return 0;
}