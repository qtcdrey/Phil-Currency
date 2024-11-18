#include <stdio.h>
#include <stdlib.h>

int denominations(int cash);

int main() {
    int cash;
    
    system("cls");
    printf("Cash on hand: ");
    scanf("%d",&cash);
    puts("Denominations:");
    denominations(cash);

    return 0;
}

struct phil {
    int one_thousand,five_hundred,two_hundred,one_hundred,fifty,twenty,ten,five,one;
};

int denominations(int cash) {
    
    struct phil pesos;
    
    int count,limit=9,currency[] = {1000,500,200,100,50,20,10,5,1};
    int pesos_result[] = {pesos.one_thousand=0,pesos.five_hundred=0,pesos.two_hundred=0,pesos.one_hundred=0,pesos.fifty=0,pesos.twenty=0,pesos.ten=0,pesos.five=0,pesos.one=0};

//SHORT HAND 2nd attempt
    for (count = 0;count < limit;count++) {
        if (currency[count] <= cash) {
            pesos_result[count] = cash / currency[count];
            cash %= currency[count];
        }
    }

/* LONG HAND 1st attempt
    if (currency[0] <= cash) {
        pesos_result[0]= cash / currency[0];
        cash %= currency[0];
    }
    if (currency[1] <= cash) {
        pesos_result[1]= cash / currency[1];
        cash %= currency[1];
    }
    if (currency[2] <= cash) {
        pesos_result[2] = cash / currency[2];
        cash %= currency[2];
    }
    if (currency[3] <= cash) {
        pesos_result[3] = cash / currency[3];
        cash %= currency[3];
    }
    if (currency[4] <= cash) {
        pesos_result[4] = cash / currency[4];
        cash %= currency[4];
    }
    if (currency[5] <= cash) {
        pesos_result[5] = cash / currency[5];
        cash %= currency[5];
    }
    if (currency[6] <= cash) {
        pesos_result[6] = cash / currency[6];
        cash %= currency[6];
    }
    if (currency[7] <= cash) {
        pesos_result[7] = cash / currency[7];
        cash %= currency[7];
    }
    if (currency[8] <= cash) {
        pesos_result[8] = cash / currency[8];
        cash %= currency[8];
    }
    */

    for (count = 0; count < limit; count++) {
        printf("%d - %d\n",currency[count],pesos_result[count]);
    }

    printf("\n");

}