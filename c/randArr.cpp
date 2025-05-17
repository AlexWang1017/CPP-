#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n[10], i, j; // 宣告一個整數陣列 n 來存放不重複的隨機數，i/j 為迴圈變數

    srand(time(NULL)); // 設定隨機種子，確保每次執行都會得到不同的亂數序列

    for (i = 0; i < 10; i++) {
        do {
            n[i] = rand() % 10 + 1; // 產生範圍為 1~10 的隨機整數

            // 檢查是否與先前產生的數字重複
            for (j = 0; j < i; j++) {
                if (n[i] == n[j]) {
                    break; // 有重複就跳出內圈，重新產生
                }
            }

        } while (j != i); // 如果 j != i，表示有重複，要重新產生

        printf("%d ", n[i]); // 印出目前產生的不重複隨機數
    }

    printf("\n");
    system("pause"); // 暫停（僅在 Windows 有效）
    return 0;
}
