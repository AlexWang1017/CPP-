#include <stdio.h>
#include <stdlib.h>

// 🟢 函式宣告：讓 main 能正確識別 hello 函式
void hello();

int main() {
    // 🔹 宣告一個函式指標 func，指向 void hello()
    void (*func)() = &hello;

    // 🔹 使用函式指標呼叫函式（可以簡寫成 func();）
    (*func)();

    system("pause");  // 暫停畫面（僅 Windows 有效）
    return 0;
}

// 🟢 函式定義：印出 Hello world!
void hello() {
    printf("Hello world!\n");
}
