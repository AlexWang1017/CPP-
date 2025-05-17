#include <stdio.h>
#include <stdlib.h>

int main() {
    // 宣告並初始化一個整數陣列，包含 5 個元素
    int arr[] = {10, 20, 25, 40, 75};

    // 宣告並初始化一個指標陣列，每個元素是指向字串的 char*
    char* array[] = {"Uaena0516", "Alex"};

    // 計算整數陣列中元素個數
    printf("Number of elements in arr: %lu\n", sizeof(arr) / sizeof(arr[0]));

    // sizeof(array[0]) 是指一個 char* 的大小（通常是 8 bytes 在 64-bit 系統）
    printf("Size of array[0] (pointer): %lu bytes\n", sizeof(array[0]));

    // 顯示每個字串的內容
    printf("First string: %s\n", array[0]);
    printf("Second string: %s\n", array[1]);

    // 暫停畫面（僅適用於 Windows）
    system("pause");

    return 0;
}
