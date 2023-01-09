#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
char **pp, *z; //Erstellung von 2 Pointern
if (argc >1) //Prufung auf Argumentuebergabe, dass es mindestens eins ist
{
pp = argv + 1; //Falls ja dann addiert es eins dazu, also 012345 + 1 = 6
z = *pp +strlen(*pp); 

while (*pp - --z)  
cout << --*z;

cout << *z << endl;
}
system("pause");
return 0;
}

/*
Es nimmt den String der Kommandozeile als Zähler; also GSVCPD als 5 und zählt runter im ASCII Code.
Damit ist es ein Dekodierungsverfahren, wie wir es schon in einer vorherigen Übung gemacht haben.
Also wird es verkehrt herum gezählt und ausgegeben --> ABCDE = EDCBAA
*/