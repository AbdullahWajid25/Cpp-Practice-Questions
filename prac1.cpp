// Array practice # 1

#include<iostream>

using namespace std;

int main() {

    // 1. Write a program to find the sum of all elements in an array

    int inputs = 0;
    int sum = 0;
    int numbers[inputs] = {};

    cout << "\n";

    cout << "How many numbers would you like to add : ";
    cin >> inputs;

    int i = 0;
    while (i < inputs)
    {
        cout << "Enter number: ";
        cin >> numbers[i];
        sum = sum + numbers[i];
        i = i + 1;
    }

    cout << "\n";
    cout << "Your sum is : " << sum;
    
    return 0;
}