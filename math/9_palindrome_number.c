#include <stdbool.h>

int reverse(int x) {
    long int number = x, reverse = 0, reminder;
    while (number != 0) {
        reminder = number % 10;
        reverse = reverse * 10 + reminder;
        number = number / 10;
    }
    return reverse;
}

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    int reverseX = reverse(x);
    if (x == reverseX) {
        return true;
    } else {
        return false;
    }
}
