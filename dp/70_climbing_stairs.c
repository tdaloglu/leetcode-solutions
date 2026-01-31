int climbStairs(int n) {
    int result = 1, prev = 1;

    while (n > 1) {
        int temp = result;
        result += prev;
        prev = temp;
        n--;
    }

    return result;
}