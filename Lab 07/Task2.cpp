#include<iostream>
using namespace std;
int main(){
	
const int numofstudents=10;
int hours[numofstudents];
int maxhours=0;
int maxindex=0;

for(int i=0;i<numofstudents;i++){
	
	cout<<"Enter the number of hours studied by the student"<<(i+1)<<":";
	cin>>hours[i];
}
for(int i=0;i<numofstudents;i++){
	cout<<"Student "<<( i+1 )<<" has studied for "<<hours[i]<<" hours ."<<endl;;


if(hours[i]>maxhours){
	maxhours=hours[i];
	maxindex=i;
}
}
cout<<"Student "<<(maxindex+1)<<" has studied the most with "<<maxhours<<" hours "<<endl;;


return 0;

}