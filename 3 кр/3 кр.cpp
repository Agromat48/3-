#include <iostream>
#include <string>

using namespace std;

struct Marsh {
    int num;
    string start;
    string finish;
};

void SetMarsh(Marsh n[10]);
void GetMarsh(Marsh n[10], int k);

int main() {
    system("chcp 1251");

    Marsh marshrut[10];
    int info;

    SetMarsh(marshrut);

    for (int i = 0; i < 10; i++) {
        cout << marshrut[i].num << "\t";
        cout << marshrut[i].start << "\t";
        cout << marshrut[i].finish << endl;
    }

    cout << "\nВведите номер маршрута, информацию о котором хотите узнать: ";
    cin >> info;

    GetMarsh(marshrut, info);

    return 0;
}

void SetMarsh(Marsh n[10]) {
    for (int i = 0; i < 10; i++) {
        cout << "Введите номер маршрута:\n";
        cin >> n[i].num;
        cout << "Введите начальный пункт маршрута:\n";
        cin >> n[i].start;
        cout << "Введите конечный пункт маршрута:\n";
        cin >> n[i].finish;
        cout << "Маршрут: " << i + 1 << " установлен\n" << endl;
    }
}

void GetMarsh(Marsh n[10], int k) {
    for (int i = 0; i < 10; i++) {
        if (k == n[i].num) {
            cout << "Маршрут номер: " << n[i].num << " начальный пункт " << n[i].start << " конечный пункт " << n[i].finish << endl;
        }
    }
}