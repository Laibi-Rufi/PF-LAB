#include<iostream>
using namespace std;

void vowels(){
	char letter;
	cout<<"Enter a single alphabet : ";
	cin>>letter;
	
	switch(letter){
		case 'a':
		case 'A':
		         cout<<"A,a is a vowel"	;
		         break;
		      
		case 'E':
		case 'e':
		         cout<<"E,e is a vowel"	;
		         break;
				 
		case 'I':
		case 'i':
		         cout<<"I,i is a vowel"	;
		         break;
				 
		case 'O':
		case 'o':
		         cout<<"O,o is a vowel"	;
		         break;
				 
		case 'U':
		case 'u':
		         cout<<"U,u is a vowel"	;
		         break;
				 
		default:
		         cout<<" The letter is consonant ";		 		 		 		 	     
	}
}
int main(){
	vowels();
}