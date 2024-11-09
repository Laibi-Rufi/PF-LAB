#include <iostream>
using namespace std;

int main() {
    const int size = 10; 
    int numbers[size];    
    
    int positiveCount = 0;  
    int negativeCount = 0;  
    int oddCount = 0;       
    int evenCount = 0;      
    int zeroCount = 0;      

    
    cout << "Enter 10 integers: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];

    
        if (numbers[i] > 0) {
            positiveCount++;
        } 
		else if (numbers[i] < 0) {
            negativeCount++;
        } 
		else {
            zeroCount++;
        }

    
        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
		 else {
            oddCount++;
        }
    }

    
    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of zeros: " << zeroCount << endl;

    return 0;
}
