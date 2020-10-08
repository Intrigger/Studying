#include <iostream>
#include <bitset>
#include <string>
#include <iomanip>
using namespace std;

void printMemSizes() {
    setlocale(0, "ru");
    cout << "Количество байт, отведенных под хранение переменных данных типов:\n\n";
    cout << "int: " << sizeof(int) << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << endl;
    cout << "short int: " << sizeof(short) << endl;
    cout << "long int: " << sizeof(long int) << endl;
    cout << "unsigned long long int: " << sizeof(unsigned long long int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "long float: " << sizeof(long float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long  double) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "bool: " << sizeof(bool) << endl;
}

void printAllBits(int a) {
    int x = abs(a);
    string s = "";
    while (x > 0) {
        s += (x % 2) + 48;
        x = x >> 1;
    }
    for (int i = 0; i < s.length() / 2; i++) {
        swap(s[i], s[s.length() - 1 - i]);
    }
    while (s.length() < 32) s = "0" + s;
    if (a < 0) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') s[i] = '1';
            else s[i] = '0';
        }
    }
    cout << s[0] << " ";
    for (int i = 1; i < 32; i++) cout << s[i];
}

void printAllBits(float a) {
    char s[32];
    union {
        int tool;
        float num_f;
    };
    
    num_f = a;

    for (int i = 0; i < 32; i++) s[i] = 0;
    for (int i = 0; i < 32; i++) {
        s[32 - 1 - i] = tool % 2;
        tool >>= 1;
    }
    cout << int(s[0]) << " " << int(s[1]) << " ";
    for (int i = 2; i < 32; i++) {
        cout << int(s[i]);
    }
}



int main() {

    printMemSizes();    //Вызываем функцию, печатающую размеры переменных

    int x;              //Число, впоследствие представляемое в 32-битном виде
    cin >> x;           //Ввод числа
    long long mask = pow(2, 31);
    

    for (int i = 0; i < 32; i++) {
        if ((mask & x) != 0) cout << 1;
        else cout << 1;
        mask >>= 1;
    }

        
    

    return 0;
}