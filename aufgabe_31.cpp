#include <stdio.h>
#include <iostream>

char *c[] = { "he dast ga", "lllt dumm", "C i", "dar nich" };
char **cp[] = { c+3, c+2, c+1, c };
char ***cpp = cp;

int main( void ) {
    std::cout << *c << std::endl;
    std::cout << **cp << std::endl;
    std::cout << ***cpp << std::endl;
    std::cout << std::endl;
    printf( "%s", **++cpp ); // cpp -> cpp[0] = c[3] --> ++cpp -> cpp[1] = c[2]
    std::cout << std::endl;
    printf( "%s", *--*++cpp+5); // *-- ist ein Zugriff inhalt des Zeigers cpp also, auf cp und dieser wird ab dem 5 Element ausgegeben
    std::cout << std::endl;
    printf( "%s", cpp[-2][0]+2 ); //überspringen der ersten beiden Literale (+2 --> ) des nullten Elements (cpp[0]) des zweiten Elements (cpp[-2])
    std::cout << std::endl;
    printf( "%s\n", *(cpp[1]+1)+3); //* heißt auf den Wert wird zugegriffen; cpp[1]+1 heißt, dass das erste Element des Arrays (String "lllt dumm") und +3 überspringt die ersten 3 Literale ("lll"); also insgesamt wird  der vierte Buchstabe des zweiten Strings im ersten Element des Arrays cpp ausgedruckt. --> "t dumm"
    std::cout << std::endl;
}