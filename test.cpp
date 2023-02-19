// Sommersemester 2022
// Aufgabe 5
#include <ostream>
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

class Complex {
private:
    double re, im;
public:
    Complex(): re(0.0), im(0.0) {}; //Standardkonstruktor beim Objektaufruf
    Complex(double r, double i) : re(r), im(i) {} //Konstruktorüberladung bei Aufruf mit 2 Parametern
    Complex(double r) : re(r), im(0.0) {} //Konstruktorüberladung bei Aufruf mit einem Parameter
    ~Complex() = default; //Standarddestruktor

    //friend ostream& operator<<(ostream& o, Complex& c ); //Nicht zu implementieren ->  Ausgabeoperatorüberladung
    //TODO Additionsoperator
    //TODO Typumwandler nach double
    //TODO Inkrementoperator
    friend Complex operator+(const Complex& a, const Complex& b) {
        return Complex(a.re+b.re, a.im+b.im);
    }
    operator double() {
        return re;
    }
    Complex operator++(int) {
        Complex tmp(*this);
        im++;
        return tmp;
    }
};
void Test_Complex() { //Funktioniert einfach mal nicht
    Complex a(2.5, -2.5);
    cout << static_cast<double>(a++) << endl << a;

    Complex b(-4.17, 8.34);
    cout << static_cast<double>(b++) << endl << b;

    Complex c = a + b;
    cout << c;

    Complex d = c + b;
    cout << d;
}
// Aufgabe 8
/*
template <typename T>
class Ptr {
T* value;

public:
// TODO Implementiere den Kopierkosntruktor
Ptr() : value(nullptr) {} //Standardkonstruktor
Ptr( const T& v) : value(new T(v)) {} //
Ptr( const Ptr<T>& p )//Kopierkonstruktor muss hier implementiert werden
{
    if (p.value)
    {
        value = new T{*(p.value)};
    }
    
}
virtual ~Ptr(){ std::cout << "Ptr::~Ptr\n"; delete value; }
Ptr<T>& operator = (const Ptr<T>& p);
const T& getValue() const { return *value; }
virtual std::string name() { return "Ptr"; }
};
void Test_Ptr() {
    Ptr<int> p1(10);
    Ptr<int> p2 = p1; //Überprüfen ob der Kopierkonstruktor korrekt implementiert wurde

    //Überprüfen ob beide Instanzen den gleichen Wert haben
    assert(p1.getValue() == p2.getValue());
    
    //Überprüfen ob beide Instanzen unterschiedliche Speicheradressen haben
    assert(&p1.getValue() != &p2.getValue());
    cout << "Kopierkonstruktor passt \n";
}
*/
// Aufgabe 10
/*
template <typename T>
class Ptr
{
    T* value;

public:
    Ptr( const T& v);
    Ptr( const Ptr<T>& p );
    virtual ~Ptr(){ std::cout << "Ptr::~Ptr\n"; delete value; }
    const T& getValue() const; 
    virtual string name() { return "Ptr"; }
    //TODO Move-Konstruktor
    Ptr(const Ptr<T>&& other) {
        value = T{*other.value};
        other.value = nullptr;
  } 
};
*/
// Aufgabe 11
template <typename T>
class Ptr
{
  T* value;

public:
    Ptr( const T& v) { value = new T{v}; }
    Ptr( const Ptr<T>& p );
    virtual ~Ptr(){ std::cout << "Ptr::~Ptr\n"; delete value; }
    Ptr<T>& operator = (const Ptr<T>& p);
    const T& getValue() const { return *value; }
    virtual std::string name() { return "Ptr"; }
    //TODO Typumwandlungsoperator der Zeiger value als const Zeiger nach außen geben.
    operator() const T*() { return value;}
};
// Aufgabe 12
//TODO Funktor-Klasse AddressSorter
class Node
{
    public:
        string getAddress() const;
        // andere Methoden...
};
class AddressSorter {
private:
    string output;
    int objectsFound;
public:
    AddressSorter(const string& s): output(s), objectsFound(0){}
    bool operator() (const Node& nd) {
        if(nd.getAddress().find(output) != string::npos) {
            ++objectsFound;
            return true;
        }
        return false;
    }
    int getNumber() {
        return objectsFound;
    }
};






int main() {
    return 0;
}
