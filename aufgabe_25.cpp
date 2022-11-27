#include <iostream>
int main() {
    using namespace std;
    int n = 3;
    float a = 0, b = 3.2;
    int m;
    char c, e = 1;

    m = ~(~ 0 << 1);
        //~0 ergibt (…11111)2, (~ 0 << 1) ergibt (…111110)2, ~(~0 << 1) ergibt also 12, damit wird m der Wert 1 zugewiesen.
    cout << m << endl;
    cout << "------------------" << endl;
    cout << (n % 2 ? -1 + n : n) << endl;
    cout << "------------------" << endl;
    cout << 1/2*b << endl;
    cout << "------------------" << endl;
    cout << (4 < 1 << n) << endl;
    cout << "------------------" << endl;
    cout << 1/e/b+a << endl;
    cout << "------------------" << endl;
    system("Pause");
}