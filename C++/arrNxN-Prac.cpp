//求3名學生三科成績總和並輸出

#include <iostream>
using namespace std;

int main(){
    int v[][3] = {100,100,100,90,50,100,60,70,80};
    int s[3] = {0};
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            s[i] += v[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++){

        cout << s[i] << endl;
    }


    system("pause");
    return 0;
} 