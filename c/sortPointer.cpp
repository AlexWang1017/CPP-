#include <stdio.h>
#include <stdlib.h>

// 交換函式：將 a 和 b 的值對調
void swap(int *a, int *b){
    int temp;
    temp = *a;    // 將 a 的值暫存到 temp
    *a = *b;      // 將 b 的值放到 a 裡
    *b = temp;    // 將 temp（原本的 a）放到 b 裡
}

// 排序函式：如果 a 比 b 大，就呼叫 swap 把它們交換
void sort(int *a, int *b){
    if (*a > *b){     // 如果 a > b，就交換
        swap(a, b);
    }
}

int main(){
    int x = 10, y = 5;  // 宣告兩個整數變數 x 和 y，並指定初始值

    // 顯示排序前的結果
    printf("Before sort: x = %d, y = %d\n", x, y);

    // 將 x 和 y 的位址傳進去做排序（確保 x <= y）
    sort(&x, &y);

    // 顯示排序後的結果
    printf("After  sort: x = %d, y = %d\n", x, y);

    system("pause"); // 暫停畫面（Windows 專用）
    return 0;
}
