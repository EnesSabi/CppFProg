#include <iostream>
int main()
{
    using namespace std;
    int a=10, b, c; 
    a*=5+10;    cout << a << endl;
    cout << "------" << endl;

    a*=b=c=20;  cout << a << ", " << b << endl;
    cout << "------" << endl;

    b=b==c;     cout << b << endl; 
    cout << "------" << endl;

    a>>=b+2;    cout << a << endl; 
    cout << "------" << endl;

    a&=0x3e;    cout << a << endl;
    cout << "------" << endl;

    a=3;
    b=2; 
    a*=b+=a<<=a+b;  cout << "a= "<< a << ", b= " << b << endl;
        return 0;
}
