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

int main() {

    printMemSizes();    //Вызываем функцию, печатающую размеры переменных

    int x;              //Число, впоследствие представляемое в 32-битном виде
    cout << "\nEnter an integer: ";
    cin >> x;           //Ввод числа
    long long mask = pow(2, 31);
    
    for (int i = 0; i < 32; i++) {
        if ((mask & x) != 0) cout << 1;
        else cout << 0;
        if (i == 0) cout << " ";
        mask >>= 1;
    }


    union {
        int putinVor;
        float navalnyTop;
    };
    cout << "\nEnter float number: ";

    cin >> navalnyTop;
    
    mask = pow(2, 31);

    for (int i = 0; i < 32; i++) {
        if ((mask & putinVor) != 0) cout << 1;
        else cout << 0;
        if (i == 0) cout << " ";
        mask >>= 1;
    }

    union {
        unsigned long long ull;
        double d;
    };

    unsigned long long maskULL = pow(2, 63);

    cout << "\nEnter double value: ";
    cin >> d;


    for (int i = 0; i < 64; i++) {
        if ((maskULL & ull) != 0) cout << 1;
        else cout << 0;
        if (i == 0) cout << " ";
        maskULL >>= 1;
    }

    return 0;
}