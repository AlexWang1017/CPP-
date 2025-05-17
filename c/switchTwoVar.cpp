#include <stdio.h>
#include <stdlib.h>

// 🔁 交換函式：使用指標來交換 a 和 b 的值
void swap(int *a, int *b){
    int temp;
    temp = *a;   // 把 *a 的值存入 temp
    *a = *b;     // *a 換成 *b 的值
    *b = temp;   // *b 換成原本的 *a（temp）
}

int main(){
    int a = 3, b = 5;
    swap(&a, &b);  // 傳入 a 和 b 的位址
    printf("%d \n%d \n", a, b);  // 印出交換後的結果

    system("pause");
    return 0;
}
