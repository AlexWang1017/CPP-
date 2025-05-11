#include <stdio.h>
#include <stdlib.h>


int main(){
    for(int i= 1 ; i <= 10; i++){
        if(i == 3){
            continue;  // Skip printing number 3
        }
        printf("%d\n",i);
    }
    printf("\n");
    for(int i= 1 ; i <= 10; i++){
        if(i == 3){
            break;  // break at  number 3
        }
        printf("%d\n",i);
    }

    system("pause");
    return 0;

}