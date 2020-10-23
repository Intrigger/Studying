#include <iostream>
#include <bitset>
#include <string>
#include <iomanip>
using namespace std;

void printMemSizes() {
    setlocale(0, "ru");
    cout << "���������� ����, ���������� ��� �������� ���������� ������ �����:\n\n";
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

    printMemSizes();    //�������� �������, ���������� ������� ����������

    int x;              //�����, ������������ �������������� � 32-������ ����
    cout << "\n������� ����� �����: ";
    cin >> x;           //���� �����
    long long mask = pow(2, 31);
    cout << sizeof(int) * 8 << "-������ ������������� ����� " << x << ": ";
    for (int i = 0; i < 32; i++) {
        if ((mask & x) != 0) cout << 1;
        else cout << 0;
        if (i == 0) cout << " ";
        mask >>= 1;
    }


    union {
        int xHelp;
        float f;
    };
    cout << "\n\n������� ������� ����� (float): ";

    cin >> f;
    
    mask = pow(2, 31);

    cout << sizeof(float) * 8 << "-������ ������������� ����� " << f << ": ";

    for (int i = 0; i < 32; i++) {
        if ((mask & xHelp) != 0) cout << 1;
        else cout << 0;
        if (i == 0) cout << " ";
        mask >>= 1;
    }

    union {
        unsigned long long ullHelp;
        double d;
    };

    unsigned long long maskULL = pow(2, 63);

    cout << "\n\n������� ������� ����� (double): ";
    cin >> d;
    cout << sizeof(double) * 8 << "-������ ������������� �����: " << d << ": ";

    for (int i = 0; i < 64; i++) {
        if ((maskULL & ullHelp) != 0) cout << 1;
        else cout << 0;
        if (i == 0) cout << " ";
        maskULL >>= 1;
    }
    
    return 0;
}