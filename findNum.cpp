#include <stdio.h>
#include <stdlib.h>

int main(){
    int id[5] = {0};
    int num, j = -1; // ✅ 初始化 j 為非 0

    // 輸入 5 筆資料
    for(int i = 1; i <= 5; i++){
        printf("%d: ", i);
        scanf("%d", &num);
        id[i - 1] = num;
    }

    // 查詢階段
    while(j != 0){ 
        printf("Q (1~5, 0 to quit): ");
        scanf("%d", &j);

        if(j >= 1 && j <= 5){
            printf("%d\n", id[j - 1]);
        } else if(j != 0) {
            printf("Invalid index. Please enter 1 to 5, or 0 to quit.\n");
        }
    }   

    system("pause");
    return 0;
}
