#ifndef SOLVER_H_INCLUDED
    #define SOLVER_H_INCLUDED
    #define DIM 100 // Aufgabe 1

    extern int errcode; // extern für die globale Variable errcode Aufgabe 2
    // ...
    int solver(double [][DIM], int);
    //...
#endif
#ifdef INLINE // Aufgabe 4
    #define getSourceFilename() __FILE__
#else
    const char* getSourceFilename();
#endif