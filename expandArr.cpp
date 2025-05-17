#include <stdio.h>   // 引入標準輸入輸出函式庫（如 printf、scanf）
#include <stdlib.h>  // 引入標準函式庫（如 malloc、free、system）

int main() {
    // 宣告一個整數指標，用來儲存輸入的數字陣列，初始設為 NULL
    int *numbers = NULL;

    // 記錄目前輸入了幾個數字（長度）
    int length = 0;

    // 開始無限迴圈，直到輸入 0 為止
    while (1) {
        int input;              // 暫存每次輸入的整數
        scanf("%d", &input);    // 從使用者讀取輸入
        if (input == 0) break;  // 如果輸入為 0，代表結束輸入

        // 動態分配一塊新的記憶體，大小為 (length + 1) 個整數空間
        int *larger = (int*)malloc(sizeof(int) * (length + 1));

        // 檢查記憶體分配是否成功
        if (larger == NULL) {
            printf("Memory allocation failed!\n"); // 顯示錯誤訊息
            free(numbers); // 釋放原本已分配的記憶體（若有）
            return 1;      // 結束程式並回傳錯誤代碼
        }

        // 將原本 numbers 中的資料複製到新空間 larger 中
        for (int i = 0; i < length; i++) {
            larger[i] = numbers[i];
        }

        // 釋放原本的記憶體空間，避免記憶體洩漏
        free(numbers);

        // 將 numbers 指向新配置的記憶體
        numbers = larger;

        // 把本次輸入的數字存入最後一個位置
        numbers[length] = input;

        // 長度加一（因為多了一筆輸入）
        length++;
    }

    // 印出所有輸入的數字
    printf("Number: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);  // 依序印出每一個數字
    }
    printf("\n");

    // 結束前釋放配置的記憶體
    free(numbers);

    // 暫停畫面（Windows 環境），按任意鍵繼續
    system("pause");

    return 0;  // 程式正常結束
}
