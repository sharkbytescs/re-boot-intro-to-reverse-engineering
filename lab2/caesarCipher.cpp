// Include the iostream library for input/output functionality
#include <iostream>

// Include the string library to work with string data
#include <string>

// Use the standard namespace so we don't need to prefix with std::
using namespace std;

// Define a function to perform Caesar Cipher encryption
// Takes a string 'text' and an integer 'shift' as input
string caesarCipher(string text, int shift) {
    // This string will hold the final encrypted result
    string result = "";

    // Loop through each character in the input text
    for (char ch : text) {
        // Check if the character is a letter (a-z or A-Z)
        if (isalpha(ch)) {
            // Determine the base ASCII value:
            // - 'a' if the character is lowercase
            // - 'A' if the character is uppercase
            char base = islower(ch) ? 'a' : 'A';

            // Shift the character using the Caesar Cipher formula:
            // 1. Subtract the base to normalize (e.g., 'a' becomes 0)
            // 2. Add the shift amount
            // 3. Use modulo 26 to wrap around the alphabet if needed
            // 4. Add the base back to get the new character
            char shifted = (ch - base + shift) % 26 + base;

            // Append the shifted character to the result string
            result += shifted;
        } else {
            // If the character is not a letter (e.g., space or punctuation),
            // just add it to the result without changing it
            result += ch;
        }
    }

    // Return the fully encrypted message
    return result;
}

int main() {
    // Declare a string to store the user's message
    string message;

    // Declare an integer for the shift amount
    int shift;

    // Ask the user to enter a message
    cout << "Enter your message: ";
    getline(cin, message); // Read the whole line, including spaces

    // Ask the user to enter a shift value (e.g., 3 means A -> D)
    cout << "Enter shift amount (e.g. 3): ";
    cin >> shift;

    // Call the caesarCipher function to encrypt the message
    string encrypted = caesarCipher(message, shift);

    // Display the encrypted message to the user
    cout << "Encrypted message: " << encrypted << endl;

    // Return 0 to indicate successful completion
    return 0;
}
