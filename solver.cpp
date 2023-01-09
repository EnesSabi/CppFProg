#include <iostream>
#include "solver.h"
using namespace std;
// ...
const char* getSourceFilename() { // Aufgabe 3
return "solver.cpp";
}
int solver(double m[][DIM], int n) {
    cout << getSourceFilename() << ": Function solver called.\n";
    if (n > DIM)
        errcode = 3;
    /* . . . */
    return 0;
}