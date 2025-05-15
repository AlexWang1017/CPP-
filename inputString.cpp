#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_read(char str[]) {
    int i = 0;
    while (i < 99) {  // 預留一格給 '\0'
        scanf("%c", &str[i]);
        if (str[i] == '\n') {
            break;
        }
        i++;
    }
    str[i] = '\0'; // 補上字串結尾
}

int main() {
    char str[100];
    str_read(str);

    printf("You entered: %s\n", str);

    system("pause");
    return 0;
}


