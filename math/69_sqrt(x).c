int helper(int x, int i) {
    if (x / i == i) return i;
    else if (x / i > i) {
        int num = helper(x, i+1);
        if (num == -1) return i;
        else return num;
    } else return -1;
}

int mySqrt(int x) {
    if (x == 0) return 0;
    return helper(x, 1);
}