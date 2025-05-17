#include <iostream>
using namespace std;

int main(){
    
    for (int num = 1; num <= 100; num++){
        int a = num % 10;
        int b = (num/10) % 10;
        if(a == 7 || b == 7){
            cout << "knock knock" << endl;
        }
        else {
            cout << num << endl;
        }

    }

    system("pause");
    return 0;
}