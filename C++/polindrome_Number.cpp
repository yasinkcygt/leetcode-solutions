class Solution {
public:
    bool isPalindrome(int x) {
        // Convert the integer to a string
        string s = to_string(x);

        // Get the length of the string
        int n = s.length();

        // Negative numbers are not palindromes
        if(x < 0) return false;
        else
            // Check if the number reads the same forward and backward
            for(int i = 0; i < n / 2; i++) {
                // Compare characters from both ends
                if(s[i] != s[n - i - 1]) {
                    return false; // Not a palindrome
                }
            }

        // All characters matched, so it's a palindrome
        return true;
    }
};
