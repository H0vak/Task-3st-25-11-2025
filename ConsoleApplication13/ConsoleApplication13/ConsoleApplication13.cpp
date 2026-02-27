#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

string replaceCustom(string st1, int start, int num, string st2) {
    string result = "";
    for (int i = 0; i < start; i++) {
        result += st1[i];
    }
    result += st2;
    for (int i = start + num; i < st1.size(); i++) {
        result += st1[i];
    }
    return result;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string st1, st2;
    int start, num;

    cout << "Введіть рядок st1: ";
    getline(cin, st1);

    cout << "Введіть позицію start: ";
    cin >> start;

    cout << "Введіть кількість символів num: ";
    cin >> num;

    cin.ignore();
    cout << "Введіть рядок st2: ";
    getline(cin, st2);

    string customResult = replaceCustom(st1, start, num, st2);

    string stdResult = st1;
    stdResult.replace(start, num, st2);

    cout << "Результат власної функції: " << customResult << endl;
    cout << "Результат стандартної функції: " << stdResult << endl;

    return 0;
}