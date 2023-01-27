// Array practice # 2

#include<iostream>

using namespace std;

int main() {

    // Write a program to find the largest element in an array.

    int inputs = 0;
    int numbers[inputs] = {};
    int large = 0;
    int count = 0;

    cout << "How many numbers would would you like to check : ";
    cin >> inputs;

    cout << "\n";

    for (int i = 0; i < inputs; i++)
    {
        cout << "Enter number : ";
        cin >> numbers[i];
    }
    
    for (int i = 0; i < inputs; i++)
    {
        count = 1;
        large = numbers[i];
        if (large < numbers[count])
        {
            large = numbers[count];
        }
        else
        {
            count++;
        }
    }

    cout << "\n";
    
    cout << "Largest number in your inputs is : " << large;

    return 0;
}