# Palindrome Checker

This C++ program contains a function to check if a given string is a palindrome or not. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).

## Usage

Compile the `palindrome_checker.cpp` file using a C++ compiler. Then, you can use the `is_palindrome` function to check if a string is a palindrome. The function returns `true` if the string is a palindrome and `false` otherwise.

Example usage in C++:

```cpp
#include <iostream>

bool is_palindrome(std::string text) {
    // Implementation of the is_palindrome function
    // ...
}

int main() {
    std::cout << std::boolalpha; // Print 'true' or 'false' instead of '1' or '0'

    // Test the is_palindrome function with different strings
    std::cout << is_palindrome("madam") << "\n";     // Output: true (palindrome)
    std::cout << is_palindrome("ada") << "\n";       // Output: true (palindrome)
    std::cout << is_palindrome("lovelace") << "\n";  // Output: false (not a palindrome)
  
    return 0;
}
