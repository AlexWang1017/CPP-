#include <stdio.h>   // 引入標準輸入輸出函式庫（如 printf、scanf）
#include <stdlib.h>  // 引入標準函式庫（如 malloc、realloc、free、system）

int main() {
    int *numbers = NULL;  // 整數指標，動態儲存使用者輸入的數字，初始為 NULL
    int length = 0;       // 用來記錄目前輸入的數量（動態陣列長度）

    // 持續輸入直到輸入 0 為止
    while (1) {
        int input;              // 暫存單次輸入的整數
        scanf("%d", &input);    // 從使用者讀取一個整數
        if (input == 0) break;  // 若輸入為 0，則結束輸入

        // 使用 realloc 來調整空間大小，擴充為可以多容納一個整數
        int *temp = (int*)realloc(numbers, sizeof(int) * (length + 1));

        // 檢查是否配置成功
        if (temp == NULL) {
            printf("Memory allocation failed!\n");  // 顯示錯誤訊息
            free(numbers);  // 釋放原本的記憶體空間（避免記憶體洩漏）
            return 1;       // 回傳錯誤代碼並結束程式
        }

        numbers = temp;              // 指標更新為新的記憶體位址
        numbers[length] = input;     // 把這次的輸入放到最後一格
        length++;                    // 陣列長度 +1
    }

    // 輸出所有輸入的數字
    printf("Number: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);  // 逐個印出每個儲存的數字
    }
    printf("\n");

    // 程式結束前釋放記憶體
    free(numbers);

    // 暫停畫面（適用於 Windows）
    system("pause");

    return 0;  // 程式正常結束
}
