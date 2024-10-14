#include<iostream>
using namespace std;

int main() {
    string firstName, lastName, streetAddress, city;
    int zipCode;

    // prompting user for input
    cout << "Enter First Name: ";
    getline(cin, firstName);
    
    cout << "Enter Last Name: ";
    getline(cin, lastName);
    
    cout << "Enter Street Address: ";
    getline(cin, streetAddress);
    
    cout << "Enter City: ";
    getline(cin, city);
    
    cout << "Enter Zip Code: ";
    cin >> zipCode;
    
    // output the info collected 
    cout << "\n--- Fictional Person Information ---" << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}
