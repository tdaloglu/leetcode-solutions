#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    if (flowerbedSize > 2) {
        int count = 0;
        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            count++;
        }
        if (flowerbed[flowerbedSize-1] == 0 && flowerbed[flowerbedSize-2] == 0) {
            flowerbed[flowerbedSize-1] = 1;
            count++;
        }
        for (int i=1; i<flowerbedSize-1; i++) {
            if (flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                flowerbed[i] = 1;
                count++;
            }
        }
        if (n <= count) {
            return true;
        } else {
            return false;
        }
    } else if (flowerbedSize == 2) {
        if (flowerbed[0] == 1 || flowerbed[1] == 1) {
            if (n == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            if (n <= 1) {
                return true;
            } else {
                return false;
            }
        }
    } else {
        if (flowerbed[0] == 0) {
            if (n <= 1) {
                return true;
            } else {
                return false;
            }
        } else {
            if (n == 0) {
                return true;
            } else {
                return false;
            }
        }
    }
}