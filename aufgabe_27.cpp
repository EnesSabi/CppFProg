// Verstehe die Fragestellung nicht

/*
Ergänzen Sie folgende Funktionen zum Kopieren von Zeichenketten. Dabei soll jeweils nur etwas in den gekennzeichneten Leerraum eingefügt werden, aber sonst nichts an den Funktionen verändert werden. Testen Sie Ihre Lösung an einem C++-Beispielprogramm.

    Im ersten Fall soll das i-te Element von s dem i-ten Element von t zugewiesen werden. Dann wird geprüft, ob der Inhalt dieses Elements gleich 0 ist. Solange diese Bedingung nicht erfüllt ist, wird i inkrementiert.
*/

void strcpy1 (char * s, char * t) {
    int i = 0;
    while (____________________)
        i++;
}
/*
Im zweiten Fall wird in der Bedingung der Inhalt der Speicherstelle, auf die die Zeiger s bzw. t zeigen, verwendet. Übergeben wird ein Zeiger auf das 0-te Element. Dieses wird beim ersten Durchlauf an das 0-te Element von t zugewiesen und es wird geprüft, ob der Inhalt dieses Elements gleich 0 ist. Solange diese Bedingung nicht erfüllt ist, werden s und t jeweils um 1 erhöht.
*/
void strcpy2 (char * s, char * t) {
    while (____________________) {
        s++;
        t++;
    }
}