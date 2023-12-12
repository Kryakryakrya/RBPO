#include "Header.h"
string s_toOutPut = "";
void WritePersonData(const string& n, const string& h, const string& w, const unsigned short* a) {
    cout << "Name: " << n << endl;
    cout << "Height: " << h << endl;
    cout << "Weight: " << w << endl;
    cout << "Age: " << *a << endl;
    cout << "Salary: " << s_toOutPut << endl;
}