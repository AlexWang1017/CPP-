#include <iostream>
using namespace std;

int max(int a, int b){
    return a > b? a:b;
}

int main(){
    int a, b;
    cout << "Enter two integer: " << endl;
    cin >> a >> b;
    int maxN = max(a,b);
    cout << "Max= " << maxN << endl;

    system("pause");
    return 0;
}