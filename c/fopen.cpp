#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // === [1] fprintf: 寫入格式化文字 ===
    FILE *fp = fopen("demo.txt", "w");
    if (fp == NULL) {
        printf("Failed to open demo.txt for writing.\n");
        return 1;
    }
    fprintf(fp, "Line A: Hello, world!\n");
    fclose(fp);

    // === [2] fputs: 寫入多行 ===
    fp = fopen("demo.txt", "a"); // 使用附加模式寫入
    fputs("Line B: This is written using fputs.\n", fp);
    fputs("Line C: Another line using fputs.\n", fp);
    fclose(fp);

    // === [3] fgetc: 用來逐字讀出 ===
    fp = fopen("demo.txt", "r");
    printf("\n[Read by fgetc]:\n");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    // === [4] fgets: 一次讀一整行 ===
    fp = fopen("demo.txt", "r");
    printf("\n[Read by fgets]:\n");
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }
    fclose(fp);

    // === [5] fwrite: 寫入二進位整數陣列 ===
    int data[5] = {10, 20, 30, 40, 50};
    fp = fopen("data.bin", "wb");
    fwrite(data, sizeof(int), 5, fp);
    fclose(fp);

    // === [6] fread: 讀取二進位檔案 ===
    int readData[5] = {0};
    fp = fopen("data.bin", "rb");
    fread(readData, sizeof(int), 5, fp);
    fclose(fp);

    printf("\n[Read by fread (binary)]:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", readData[i]);
    }
    printf("\n");

    // === [7] fseek / ftell / rewind 操作文字檔 ===
    fp = fopen("demo.txt", "r");
    fseek(fp, 0, SEEK_END);       // 移到檔案結尾
    long size = ftell(fp);        // 取得目前位置（也就是檔案大小）
    rewind(fp);                   // 重設指標回到檔案開頭

    printf("\n[File size of demo.txt]: %ld bytes\n", size);
    fclose(fp);

    system("pause"); // Windows下暫停視窗
    return 0;
}
