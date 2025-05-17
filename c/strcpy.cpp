#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // source 是指向常量字串 "test" 的指標（儲存在唯讀記憶體）
    const char *source = "test";

    // destination 是一個可寫入的陣列（在堆疊記憶體中），大小為 5（包含 '\0'）
    char destination[5];

    // 將 source 的內容複製到 destination 中（包含結尾字元 '\0'）
    strcpy(destination, source);

    // 輸出 destination 中的字串
    printf("%s\n", destination);

    system("pause");
    return 0;
}
