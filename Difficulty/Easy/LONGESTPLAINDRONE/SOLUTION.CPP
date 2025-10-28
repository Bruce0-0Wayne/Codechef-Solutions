#include <iostream>
#include <string>
using namespace std;

// Function to expand around the center and update the longest palindrome info
void expandFromCenter(string &s, int left, int right, int &start, int &maxLen) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    int len = right - left - 1; // Length of palindrome found
    if (len > maxLen) {
        maxLen = len;
        start = left + 1;
    }
}

// Main function to find the longest palindromic substring
string longestPalindrome(string s) {
    int start = 0, maxLen = 0;
    int n = s.size();
    
    for (int i = 0; i < n; i++) {
        // Expand for odd-length palindrome (center = i)
        expandFromCenter(s, i, i, start, maxLen);
        // Expand for even-length palindrome (center = i, i+1)
        expandFromCenter(s, i, i + 1, start, maxLen);
    }
    
    return s.substr(start, maxLen);
}

// Driver code (main function)
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string result = longestPalindrome(s);
    cout << "Longest Palindromic Substring: " << result << endl;

    return 0;
}
