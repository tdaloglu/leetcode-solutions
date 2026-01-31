int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int sum = 0;
    for (int i = 0; i < accountsSize; i++) {
        int temp = 0;
        for (int j = 0; j < (*accountsColSize); j++) {
            temp += accounts[i][j];
        }

        if (temp > sum) sum = temp;
    }

    return sum;
}