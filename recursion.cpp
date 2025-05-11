#include <stdio.h>   // 引入標準輸入輸出函式庫
#include <stdlib.h>  // 引入標準函式庫（例如 system("pause")）

// 函式宣告：countTo3 接收一個整數參數
void countTo3(int);

int main(){
    countTo3(1);        // 從 1 開始呼叫遞迴函式，印出 1 到 3
    system("pause");    // 暫停畫面，按任意鍵才結束（僅適用於 Windows）
    return 0;           // 結束主程式
}

// 遞迴函式定義：從 i 開始，遞迴印出到 3 為止
void countTo3 (int i){
    if(i <= 3){                     // 條件：當 i 小於或等於 3 時繼續執行
        printf("%d\n", i);          // 印出目前的 i 值
        countTo3(i + 1);            // 遞迴呼叫自己，i 增加 1
    }
    // 遞迴終止條件是 i > 3，此時不再進入 if 區塊，自動結束遞迴
}
