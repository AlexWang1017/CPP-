#include <stdio.h>
#include <stdlib.h>

int main() {
    int total = 0, id;

    do {
        printf("Enter the id (0 to quit): \n");
        scanf("%d", &id);
        switch(id) {
            case 1: total += 90; break;
            case 2: total += 75; break;
            case 3: total += 83; break;
            case 4: total += 89; break;
            case 5: total += 71; break;
            case 0: break; // do nothing, exit condition
            default:
                printf("Invalid ID. Please enter a number between 1-5.\n");
        }
    } while(id != 0);

    printf("Total: %d\n", total);
    system("pause");
    return 0;
}





/*id ; price
 1   ;    90
  2  ;    75
  3  ;    83
  4  ;    89
  5  ;    71


    */