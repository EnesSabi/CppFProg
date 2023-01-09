// 7 verschiedene Fehler mit der Speicher allokation

const int LEN=32; 
struct Foo 
{
  char *ding; // 1. Speicherleck, da keine Freigabe der beiden Pointer.
  char *dong;
};
 
char* f1(void)
{
  char carray[LEN];
  carray[0] = 'a'; // 2. Nur auf dem Stack verfügbarer Wert, nach return ungültiger Wert.
  return carray; 
}
 
char* f2(void)
{
  char *cp;
  int i = LEN;
  cp = new char[i]; // 3. Es wird ein Array mit der Länge i allokiert
  while (i) cp[i--] = '\0'; //aber hier wird i+1 abgezogen in der Schleife, deshalb wird ein Überlauffehler passieren
  return cp;
}
 
char* f3()
{
  return new char[1024]; // 4. Speicherleckgefahr, da nur allokiert wird und nie freigegeben --> StackOverFlow
}
 
int main(void)
{
  char* cp1;
  char* cp2;
  char* cp3;
  Foo *f;
  f = new Foo(); 
  f->ding = new char[128];
  f->dong = new char[128];
  cp1 = f1();
  cp1[0] = 0x01;
  cp2 = f2();
  cp3 = f3(); //geht flöten, also irgendwo im speicher ohne bekannte Adresse
  cp3 = nullptr; // 5. Segmentationsfehler, falls auf cp3 später zugegriffen werden sollte
  delete f;
  delete[] cp3; //Führt nichts durch, da cp3 nullptr und damit ungültig ist.
  return 0;
}

// Ich finde die letzten 2 nicht, falls jemand die finden sollte, kann er mir eine E-Mail schreiben.