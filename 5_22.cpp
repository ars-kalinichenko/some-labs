#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void remove_in_string(string s1, const string &s2) {
    for (char i : s2) {
        while (s1.find(i) != -1)
            s1.erase(s1.find(i), 1);
    }
    cout << "Итоговая строка: " << s1 << endl;

}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string s1, s2;
    cout << "Строка 1 = ";
    getline(cin, s1);
    cout << "Строка 2 = ";
    getline(cin, s2);
    remove_in_string(s1, s2);
    return 0;
}
