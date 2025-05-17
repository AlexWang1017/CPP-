#include <stdio.h>
#include <stdlib.h>

// 函式宣告：s(n) 用來計算費波那契數列（稍作修改版本）
int s(int n);

int main() {
    int n;
    printf("n= \n");
    scanf("%d", &n);                // 使用者輸入 n
    printf("%d\n", s(n));           // 印出 s(n) 的結果

    system("pause");
    return 0;
}

// 遞迴函式定義
int s(int n) {
    if (n <= 2) {
        return n;                   // 基底條件：s(0)=0, s(1)=1, s(2)=2
    }
    return s(n - 1) + s(n - 2);     // 遞迴公式：s(n) = s(n-1) + s(n-2)
}

/*
📝【範例說明】

如果輸入 n = 5：
s(5) = s(4) + s(3)
     = (s(3) + s(2)) + (s(2) + s(1))
     = ((s(2) + s(1)) + 2) + (2 + 1)
     = ((2 + 1) + 2) + 3
     = (3 + 2) + 3
     = 5 + 3
     = 8

所以輸出為：
8

s(0) = 0
s(1) = 1
s(2) = 2
s(3) = s(2) + s(1) = 2 + 1 = 3
s(4) = s(3) + s(2) = 3 + 2 = 5
s(5) = s(4) + s(3) = 5 + 3 = 8
*/