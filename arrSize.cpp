#include <stdio.h>
#include <stdlib.h>

int main() {
    // 宣告並初始化一個整數陣列，包含 5 個元素
    int arr[] = {10, 20, 25, 40, 75};

    // 使用 sizeof 計算陣列中元素的個數
    // sizeof(arr) 是整個陣列的大小（以位元組計）
    // sizeof(arr[0]) 是陣列中一個元素的大小
    // 兩者相除得到陣列的元素個數
    printf("%lu\n", sizeof(arr) / sizeof(arr[0]));

    // 暫停畫面（Windows 系統下有效）
    system("pause");
    
    return 0;
}
