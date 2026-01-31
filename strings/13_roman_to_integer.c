int value(char c) {
    if (c == 'I') {
        return 1;
    } else if (c == 'V') {
        return 5;
    } else if (c == 'X') {
        return 10;
    } else if (c == 'L') {
        return 50;
    } else if (c == 'C') {
        return 100;
    } else if (c == 'D') {
        return 500;
    } else if (c == 'M') {
        return 1000;
    } else {
        return 0;
    }
}

int romanToInt(char* s) {
    int len = strlen(s);
    int i, sum = 0;
    sum += value(s[len-1]);
    for (i=len-2; i>=0; i--) {
        if (value(s[i]) < value(s[i+1])) {
            sum -= value(s[i]);
        } else {
            sum += value(s[i]);
        }
    }
    return sum;
}