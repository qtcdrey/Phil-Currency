#include <stdio.h>

int main() {
    int cash;
    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 1};
    int result[8] = {0}; // Array to store the count of each denomination
    printf("Cash on hand: ");
    scanf("%d", &cash);
    result[0] = cash / denominations[0];
    cash %= denominations[0];
    result[1] = cash / denominations[1];
    cash %= denominations[1];
    result[2] = cash / denominations[2];
    cash %= denominations[2];
    result[3] = cash / denominations[3];
    cash %= denominations[3];
    result[4] = cash / denominations[4];
    cash %= denominations[4];
    result[5] = cash / denominations[5];
    cash %= denominations[5];
    result[6] = cash / denominations[6];
    cash %= denominations[6];
    result[7] = cash / denominations[7];
    cash %= denominations[7];

    // Print the results
    puts("denominations:");
    if (result[0] > 0) printf("%d - %d\n", denominations[0], result[0]);
    if (result[1] > 0) printf("%d - %d\n", denominations[1], result[1]);
    if (result[2] > 0) printf("%d - %d\n", denominations[2], result[2]);
    if (result[3] > 0) printf("%d - %d\n", denominations[3], result[3]);
    if (result[4] > 0) printf("%d - %d\n", denominations[4], result[4]);
    if (result[5] > 0) printf("%d - %d\n", denominations[5], result[5]);
    if (result[6] > 0) printf("%d - %d\n", denominations[6], result[6]);
    if (result[7] > 0) printf("%d - %d\n", denominations[7], result[7]);

    return 0;
}
