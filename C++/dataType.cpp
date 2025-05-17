#include <iostream>
using namespace std;

int main() {
    short s = 100;
    int i = 1000;
    long l = 100000;
    long long ll = 10000000000;

    cout << "short: " << s << endl;
    cout << "int: " << i << endl;
    cout << "long: " << l << endl;
    cout << "long long: " << ll << endl;

    cout << "sizeof(short) = " << sizeof(s) << " bytes" << endl;
    cout << "sizeof(int) = " << sizeof(i) << " bytes" << endl;
    cout << "sizeof(long) = " << sizeof(l) << " bytes" << endl;
    cout << "sizeof(long long) = " << sizeof(ll) << " bytes" << endl;

    system("pause");
    return 0;
}
