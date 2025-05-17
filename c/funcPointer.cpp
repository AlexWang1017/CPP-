#include <stdio.h>
#include <stdlib.h>

void addone(int *n){
    *n += 1;  // 將指標所指向的變數值加 1
}

int main(){
    int a = 3;
    addone(&a);         // 傳入變數 a 的位址
    printf("%d\n", a);  // 印出 a 的值（會變成 4）

    system("pause");
    return 0;
}
