#include <stdio.h>
#include <stdlib.h>

int main() {
    int total = 0;
    int id[5] = {90, 75, 83, 89, 71};
    int ID;

    do {
        printf("Enter ID (1 to 5) or 0 to quit: \n");
        scanf("%d", &ID);

        if (ID >= 1 && ID <= 5) {
            total += id[ID - 1];
        } else if (ID != 0) {
            printf("Invalid ID. Please enter a number from 1 to 5.\n");
        }

    } while (ID != 0);

    printf("Total is %d\n", total);
    system("pause");
    return 0;
}




/*
ID 1 = 90
   2 = 75
   3 = 83
   4 = 89
   5 = 71






*/