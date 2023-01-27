// Array practice # 3

#include<iostream>

using namespace std;

int main() {

    // Write a program to reverse the elements in an array.

    int inputs = 0;
    int count = 0;
    int numbers[inputs] = {};

    cout << "How many numbers would you like to input : ";
    cin >> inputs;

    cout << "\n";

    for (int i = 0; i < inputs; i++)
    {
        cout << "Enter number : ";
        cin >> numbers[i];
    }

    cout << "\n";

    cout << "Your array : [ ";
    for (int i = 0; i < inputs; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << " ]";

    cout << "\n";
    
    cout << "Reversed array : [ ";
    for (int i = inputs; i > 0; i--)
    {
        cout << numbers[i-1] << " ";
    }
    cout << " ]";

    return 0;
}