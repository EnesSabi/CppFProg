#include <string>

using namespace std;

int main() {

}
string& strToUpper(const string& s1) {
    string s2;
    s2 = " ";

    for(int i = 0; i  < s1.length(); i++) {
        s2 += toupper(s1[i]);
    }
    return s2;
}

//Verstehe die Frage wieder nicht.
