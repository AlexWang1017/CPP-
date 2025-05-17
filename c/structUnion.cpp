#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定義 struct
struct PersonStruct {
    char name[20];
    int age;
    float height;
};

// 定義 union
union PersonUnion {
    char name[20];
    int age;
    float height;
};

int main() {
    // 使用 struct
    struct PersonStruct s;
    strcpy(s.name, "Alice");
    s.age = 25;
    s.height = 160.5;

    printf("=== struct ===\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Height: %.1f\n", s.height);

    // 使用 union
    union PersonUnion u;
    strcpy(u.name, "Bob");  // 寫入 name
    printf("\n=== union ===\n");
    printf("Name: %s\n", u.name);

    u.age = 30;             // 覆蓋 name
    printf("Age: %d\n", u.age);
    printf("Name after age: %s\n", u.name); // 結果可能亂碼

    u.height = 175.2;       // 再次覆蓋
    printf("Height: %.1f\n", u.height);
    printf("Age after height: %d\n", u.age); // 結果可能錯誤

    system("pause");
    return 0;
}


/*
struct 適合用於同時儲存多筆不同類型資料，例如：一個人有名字、年齡、身高。

union 適合用於多種資料共用空間的場景，例如：資料封包中，不同格式只會出現一種。

*/