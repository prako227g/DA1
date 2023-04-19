#include <stdio.h>

int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int maxArea = 0;

    while (left < right) {
        int currentArea = (right - left) * (height[left] < height[right] ? height[left] : height[right]);
        if (currentArea > maxArea) {
            maxArea = currentArea;
        }

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}

int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int heightSize = sizeof(height) / sizeof(height[0]);
    int maxWater = maxArea(height, heightSize);

    printf("The maximum amount of water a container can store is %d.\n", maxWater);

    return 0;
}
