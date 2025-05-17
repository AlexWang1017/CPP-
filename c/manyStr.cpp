#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 一大塊字元陣列，用來存所有輸入字串的實際內容
    char raw[5000];

    // 指標陣列，每個元素會指向 raw 中的某個位置（即某個字串的起點）
    char *str[100];

    // 暫存每次輸入的字串（最長 49 個字元 + '\0'）
    char input[50];

    // size：目前 raw 已使用的大小
    // len：目前已輸入的字串數量
    int size = 0;
    int len = 0;

    // 持續讀入字串直到輸入 "END"
    while (1) {
        scanf("%49s", input); // 為了安全起見限制最多讀取 49 字元
        if (strcmp(input, "END") == 0) break; // 若輸入為 END 則結束迴圈

        // 計算目前輸入字串長度 +1（要加上 '\0'）
        int input_len = strlen(input) + 1;

        // 檢查是否超過 raw 陣列的大小
        if (size + input_len > 5000) {
            printf("Error: raw array overflow!\n");
            break;
        }

        // 將 str[len] 設為 raw 中目前可以存字串的位置
        str[len] = raw + size;

        // 把輸入字串複製到 raw 裡（透過 str[len] 指向的地址）
        strcpy(str[len], input);

        // 更新 raw 使用的大小（加上剛剛存的字串長度）
        size += input_len;

        // 更新已存的字串數量
        ++len;
    }

    // 印出所有儲存過的字串
    printf("------\n");
    for (int i = 0; i < len; i++) {
        printf("%s ", str[i]); // 每個 str[i] 都指向 raw 中的字串
    }

    // 印出總共儲存幾個字串，以及 raw 使用了多少位元組
    printf("\n(%d, %d)\n", len, size);

    system("pause");
    return 0;
}
