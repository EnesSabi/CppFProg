#include <iostream>

#define SQR(a) a*a
#define CUB(a) a*a*a
#define PI 3.1415927

int main(int argc, char const *argv[])
{
    using namespace std;
    int a = 5;
    int radius;
    
    
    cout << "Please insert radius of the sphere" << endl;
    cin >> radius;
    cout << PI << endl;
    cout << "------" << endl;
    cout << a << endl;
    cout << "------" << endl;
    cout << SQR(a) << endl;
    cout << "------" << endl;
    cout << CUB(a) << endl;
    cout << "------" << endl;
    cout << 4/3*PI*CUB(radius) << endl;
    cout << "------" << endl;
    system("pause");
    return 0;
}
