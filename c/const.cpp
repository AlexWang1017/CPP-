#include <stdio.h>
#include <stdlib.h>

int main(){
    // 建立一個可修改的字元陣列，儲存 "test"
    char strA[] =  "test";

    // strB 是一個指標，指向一個常量字串 "test"（通常儲存在唯讀記憶體）
    char *strB = "test";

    // strC 是一個指向常量字元的指標，不允許修改它所指向的內容
    const char *strC = "test";

    // ✅ 可以修改 strA 裡的內容，因為它是 char 陣列
    strA[0] = 'T'; // strA 現在是 "Test"

    // ✅ 把 strA 的地址指定給 strB，代表 strB 現在也指向 strA
    strB = strA;

    // ✅ 把 strA 的地址指定給 strC（可以改指向，但不能透過 strC 修改內容）
    strC = strA;

    // ✅ strC 再改指向 strB，也沒問題
    strC = strB;

    system("pause");
    return 0;
}

/*
| 宣告方式               | 儲存位置          | 是否可修改內容          | 是否可換指向  |
| ------------------ | ------------- | ---------------- | ------- |
| `char strA[]`      | Stack (自動變數)  | ✅ 可以             | ❌ 不可換地址 |
| `char *strB`       | 指向 Literal/陣列 | ⚠️ 不建議改內容（未定義行為） | ✅ 可以    |
| `const char *strC` | 指向 Literal/陣列 | ❌ 不可改內容          | ✅ 可以    |
⚠️ 若你對 strB[0] = 'T'; 試圖修改常量字串的內容，在某些編譯器中會導致程式錯誤或崩潰（Segmentation fault），因為這類常量字串儲存在唯讀區域。

    如果你想試看看 strB[0] = 'T';，可以加這行看看會不會錯：
    strB[0] = 'T'; // ⚠️ 小心可能錯誤，若 strB 還指向 "test" 常量
    在這段程式中，因為後來 strB = strA;，所以這時 strB[0] = 'T'; 就是合法的。


*/