#include <iostream>
#include <vector>

// Function to check if a string is a palindrome
bool is_palindrome(std::string text) {
    std::vector<char> letters; // Vector to store each character of the input string

    // Store each character of the input string in the vector
    for (char letter : text) {
        letters.push_back(letter);
    }
    
    int length = letters.size(); // Get the length of the vector (number of characters in the string)

    // Iterate through the vector to check if it's a palindrome
    for (int i = 0; i < length; i++) {
        // Compare the character at position i with the character at position length - 1 - i
        if (letters[i] == letters[length - 1 - i]) {
            return true; // If characters match, continue checking
        } else {
            return false; // If characters don't match, the string is not a palindrome
        }
    }
}

int main() {
    std::cout << std::boolalpha; // Print 'true' or 'false' instead of '1' or '0'

    // Test the is_palindrome function with different strings
    std::cout << is_palindrome("madam") << "\n";     // Output: true (palindrome)
    std::cout << is_palindrome("ada") << "\n";       // Output: true (palindrome)
    std::cout << is_palindrome("lovelace") << "\n";  // Output: false (not a palindrome)
  
    return 0;
}
