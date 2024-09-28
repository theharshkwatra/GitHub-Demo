bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) {
        return false;
    }

    int temp = x;
    int result = 0;

    // Reversing the digits of the number
    while (x != 0) {
        int store = x % 10;

        // Check for overflow before multiplying by 10
        if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && store > 7)) {
            return false;  // Overflow condition
        }

        result = result * 10 + store;
        x = x / 10;
    }

    // Check if the reversed number matches the original number
    return result == temp;
}

