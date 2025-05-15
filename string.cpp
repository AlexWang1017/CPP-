#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_print(char str[]){
    for(int i = 0; i < 5; i++){
        printf("%c", str[i]);
    }
    printf("\n");
}


int main(){
    char str[] = {
        'H','E','L','L','O'
    };
    str_print(str);
    int length = strlen(str);
    printf("%d\n",length);

    system("pause");
    return 0;
}