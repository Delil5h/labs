#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to reverse the string
string Reverse(string str) {
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

// Function to capitalize the second letter of each word
string CapitalizeSecondLetter(string str) {
    string capitalizedStr = "";
    bool capitalizeNext = true;
    for (char c : str) {
        if (capitalizeNext && c != ' ') {
            capitalizedStr += toupper(c);
            capitalizeNext = false;
        } else {
            capitalizedStr += c;
            if (c == ' ') {
                capitalizeNext = true;
            }
        }
    }
    return capitalizedStr;
}

int main() {
    // Open the text file
    ifstream data("data.txt");
    if (!data) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // Read the file contents into the fileData variable
    string fileData((istreambuf_iterator<char>(data)), istreambuf_iterator<char>());

    // Calculate and output the number of vowels
    int vowelCount = 0;
    for (char c : fileData) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;

    // Calculate and output the number of words
    int letterCount = 0;
    for (char c : fileData) {
        if (c == ' ') {
            letterCount++;
        }
    }
    letterCount++; // Count the last word
    cout << "Number of words: " << letterCount << endl;

    // Output the reversed statement
    cout << "Reversed statement: " << Reverse(fileData) << endl;

    // Output the statement with the second letter of each word capitalized
    cout << "Capitalized second letter: " << CapitalizeSecondLetter(fileData) << endl;
return 0;
}