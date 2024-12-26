#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(const string& str, int start,int end){
    if(start>=end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    else{
        return ispalindrome(str,start+1,end-1);
    }
}
int main(){
    string input;
    cout<<"Enter a string:";
    getline(cin,input);
    if(ispalindrome(input,0,input.length()-1)){
        cout<<"It is a palindrome.";

    }
    else{
        cout<<"It is not a palindrome.";
    }
    return 0;
    
}
