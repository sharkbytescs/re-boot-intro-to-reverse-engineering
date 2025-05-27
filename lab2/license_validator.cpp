#include <iostream>     // For input and output (cin and cout)
#include <string>       // To use the string class
using namespace std;    // So we don’t need to write std:: before cin, cout, etc.

// This function checks if the license key is valid
bool validateKey(const string& key) {
    // Step 1: Check if the key length is exactly 10 characters
    if (key.length() != 10) return false;

    int checksum = 0; // Initialize checksum value to zero

    // Step 2: Loop through each character in the key
    for (int i = 0; i < key.length(); i++) {
        // Multiply the ASCII value of the character by its (index + 1)
        // and add the result to the checksum
        checksum += key[i] * (i + 1);
    }

    // Step 3: Check if the final checksum matches the expected value (1337)
    if (checksum == 1337) {
        return true;  // If it matches, the key is valid
    } else {
        return false; // Otherwise, the key is invalid
    }
}

// The main function starts here – this is where the program begins
int main() {
    string userKey; // Declare a variable to store the user's input

    // Print the title of the program
    cout << "=== License Key Validator ===\n";

    // Prompt the user to enter a license key
    cout << "Enter your license key: ";
    cin >> userKey; // Read input from the user

    // Call the validateKey function to check the entered key
    if (validateKey(userKey)) {
        // If valid, display success message
        cout << "License Accepted. Welcome!\n";
    } else {
        // If invalid, display error message
        cout << "Invalid License Key. Access Denied.\n";
    }

    return 0; // Exit the program
}
