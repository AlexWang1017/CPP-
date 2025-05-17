#include <stdio.h>
#include <stdlib.h>

int main(){
    int count = 9;                // 宣告整數變數 count 並賦值為 9
    int *countAddr = &count;     // 宣告整數指標 countAddr，並指向 count 的位址
    printf("%d\n",*countAddr);     // 輸出 countAddr 所指向的值（也就是 count 的值 9）
    printf("%d\n",count);          // 再次輸出 count 的值（也是 9）

    system("pause");             // 暫停程式執行（僅限 Windows 環境）
    return 0;
}
