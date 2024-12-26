#include<iostream>
using namespace std;
int sum(int A[],int size){
    if(size==0){
        return 0;
    }
    else{
        return A[size-1]+sum(A,size-1);
    }
}
int main(){
    int Arr[]={9,5,6,7,8};
    int size=sizeof(Arr)/ sizeof(Arr[0]);
    int result=sum(Arr,size);
    cout<<"The sum of the elements of array:"<<result;
    return 0;
}
