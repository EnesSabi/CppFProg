#include <iostream>
#include <string>

using namespace std;

void a() {
    
    //a. Pointer to constant float variable
    const float pi = 3.14;
    const float* a = &pi;
    cout << "const float* a = " << a << endl;
    //b. constant pointer to a float variable
    float nice = 69.420;
    const float* b = &nice;
    cout << "const float* b = " << b << endl;
    //c. Pointer to a constant pointer to a float variable
    float ceni = 420.69;
    const float* cpceni = &ceni;
    const float** c = &cpceni;
    cout << "const float** c" << c << endl;
    //d. array of three pointers.
    float one = 1.0;
    float* farr[3];

    float* uno = &one;
    float* dos = &one;
    float* tres = &one;
    
    farr[0] = uno;
    farr[1] = dos;
    farr[2] = tres;

    cout << "array of floats: ";
    for(int i = 0; i < sizeof(farr)/sizeof(farr[0]); i++){
        cout << farr[i] << endl;
    }
    //e. Pointer to array of float pointer
    float *e =  *farr;
    cout << "Pointer to array of float pointer: " << e << endl;
}
void b() {
    //What is dereferencing
    string str = "Dereferencing is getting the value of a pointer, not the pointer adress.";
    cout << str << endl;
}
int main() {
    a();
    b();
    system("pause");
}
