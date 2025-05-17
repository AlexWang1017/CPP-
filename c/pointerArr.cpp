#include <stdio.h>
#include <stdlib.h>

// 函式 print 接收一個指向含有 3 個 int 元素的陣列的指標
void print(int (*q)[3]) {
    for (int i = 0; i < 3; i++) {
        // 透過解參考 (*q) 取得陣列，再用 [i] 取值
        printf("%d ", (*q)[i]);
    }
    printf("\n");
}

int main() {
    // 宣告並初始化一個整數陣列
    int v[3] = {1, 2, 3};

    // 傳遞陣列的地址（&v 是 int (*)[3] 型別）
    print(&v);

    system("pause");
    return 0;
}

/*
 可替代寫法（用 int *q 傳遞）

void print(int *q) {
    for (int i = 0; i < 3; i++) {
        printf("%d ", q[i]);
    }
    printf("\n");
}

int main() {
    int v[3] = {1, 2, 3};
    print(v);  // 傳遞陣列首位址
    system("pause");
    return 0;
}


*/