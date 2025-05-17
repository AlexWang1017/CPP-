

````markdown
# 🔧 C 語言 Pointer 轉型（Casting）範例大全

在 C 語言中，指標轉型是將一種型別的指標轉換成另一種型別。這常用於低階操作、函式傳遞、以及記憶體資料詮釋。

---

## 📌 基本語法

```c
type2* new_ptr = (type2*) old_ptr;
````

---

## 🧪 範例分類

### 1. `void*` 萬用指標轉型

```c
int a = 100;
void *vp = &a;
int *ip = (int *)vp;
printf("%d\n", *ip); // 輸出 100
```

---

### 2. `int*` → `char*`（觀察記憶體內容）

```c
int x = 0x12345678;
char *p = (char *)&x;
printf("%x\n", *p); // 小端系統輸出 78
```

---

### 3. `float*` → `int*`（位元解讀）

```c
float f = 3.14;
int *ip = (int *)&f;
printf("%x\n", *ip); // 觀察 float 的位元表示
```

---

### 4. 結構指標轉型（謹慎使用）

```c
struct A { int x; };
struct B { int x; int y; };

struct B b = {1, 2};
struct A *ap = (struct A *)&b;
printf("%d\n", ap->x); // 安全存取
```

---

### 5. 指標 ↔ 整數地址轉型

```c
#include <stdint.h>

int a = 42;
uintptr_t addr = (uintptr_t)&a;
int *p = (int *)addr;
printf("%d\n", *p); // 輸出 42
```

---

### 6. 陣列轉 `void*` 再轉回

```c
int arr[3] = {10, 20, 30};
void *vp = arr;
int *ip = (int *)vp;
printf("%d\n", ip[1]); // 輸出 20
```

---

### 7. 錯誤範例：不相容型別

```c
double d = 3.1415;
int *ip = (int *)&d;
printf("%d\n", *ip); // 不正確，可能出錯
```

---

### 8. 函式指標轉型（少見）

```c
void hello() { printf("Hello!\n"); }

void (*vfp)() = (void (*)())hello;
vfp(); // 呼叫 hello()
```

---

## ⚠️ 使用注意

| 問題           | 解說                |
| ------------ | ----------------- |
| 原始資料是什麼？     | 指標不能亂轉，不然會誤解內容。   |
| 是否對齊？        | 不對齊存取會在某些架構下崩潰。   |
| 是否安全？        | 避免未定義行為，尤其是結構間轉型。 |
| `void*` 安全嗎？ | 是的，只要轉回正確型別再使用即可。 |

---

## ✅ 小結表

| 類型轉型           | 是否常見   | 是否安全   |
| -------------- | ------ | ------ |
| `void*` ↔ 任意型別 | ✅ 常見   | ✅ 安全   |
| 整數 ↔ 指標地址      | ⚠️ 有風險 | ✅ 小心使用 |
| 不同資料型別指標轉型     | ⚠️ 較少  | ❌ 高風險  |
| 結構間轉型          | ⚠️ 有風險 | ❌ 不建議  |

---

