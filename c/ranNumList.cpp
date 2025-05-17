#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int next = 1;

    for (int i = 1; i <= 5; i++) {
        next = next * 1103515245 + 12345; // 修正係數
        int rand = (unsigned int)(next / 65536) % 32768;
        printf("%d\n", rand);
    }

    system("pause");
    return 0;
}
