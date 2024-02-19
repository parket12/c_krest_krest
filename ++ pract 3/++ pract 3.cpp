#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double mama[3][5];
    cout << "Введите элементы массива (3 строки по 5 элементов, через пробел):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mama[i][j];
        }
    }


    double sred_mama[3];
    for (int i = 0; i < 3; i++) {
        double sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += mama[i][j];
        }
        sred_mama[i] = sum / 5;
    }


    cout << "Средние арифметические элементов строк:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << fixed << setprecision(2) << sred_mama[i] << " ";
    }
    cout << endl;

    return 0;
}