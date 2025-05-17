#include <stdio.h>
#include <stdlib.h>

int main(){
    int A = 9;
    int B = 10;
    int *countAddr;
    
    countAddr = &A;     // countAddr 指向 A 的位址
    *countAddr = 0;     // 將 A 的值改為 0
    
    countAddr = &B;     // countAddr 改為指向 B 的位址
    *countAddr = 0;     // 將 B 的值改為 0

    system("pause");
    return 0;
}
