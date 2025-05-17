#include <stdio.h>
#include <stdlib.h>

// 函式宣告：calculate 接受一個函式指標作為參數（兩個 int 輸入、回傳 int）
int calculate(int (*op)(int, int));

// 函式原型：兩個操作函式
int add(int, int);
int multiply(int, int);

int main() {
    // 呼叫 calculate 並傳入 add 函式指標，進行加總
    printf("%d\n", calculate(add));       // 輸出：15

    // 呼叫 calculate 並傳入 multiply 函式指標，進行乘積
    printf("%d\n", calculate(multiply));  // 輸出：120

    system("pause");
    return 0;
}

// 實作一個高階函式，傳入 op 函式指標，用來操作 result 與迴圈變數 i
int calculate(int (*op)(int, int)) {
    int result = 1;  // 初始值設為 1（適合乘法）

    for (int i = 2; i <= 5; i++) {
        result = op(result, i);  // 根據傳入的 op 進行運算
    }

    return result;
}

// 加法函式
int add(int a, int b) {
    return a + b;
}

// 乘法函式
int multiply(int a, int b) {
    return a * b;
}
