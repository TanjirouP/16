#include <iostream>
#include <Windows.h>
using namespace std;
void collor() {
    system("cls");
    int collor = 0;
    cout << "[+] Выберите цвет:\n[1] Черный\n[2] Синий\n[3] Зеленый\n[4] Голубой\n[5] Красный\n[+] Введите значение: ";
    cin >> collor;
    if (collor == 1) {
        system("cls");
        system("color 0F");
    }
    else if (collor == 2) {
        system("cls");
        system("color 1F");
    }
    else if (collor == 3) {
        system("cls");
        system("color 2F");
    }
    else if (collor == 4) {
        system("cls");
        system("color 3F");
    }
    else if (collor == 5) {
        system("cls");
        system("color 4F");
    }
    else {
        system("cls");
        cout << "Ошибка";
        Sleep(1000);
        system("cls");
    }
}

void collortext() {
    system("cls");
    int collor = 0;
    cout << "[+] Выберите цвет:\n[1] Черный\n[2] Синий\n[3] Зеленый\n[4] Голубой\n[5] Красный\n[+] Введите значение: ";
    cin >> collor;
    if (collor == 1) {
        system("cls");
        system("color 00");
    }
    else if (collor == 2) {
        system("cls");
        system("color 01");
    }
    else if (collor == 3) {
        system("cls");
        system("color 02");
    }
    else if (collor == 4) {
        system("cls");
        system("color 03");
    }
    else if (collor == 5) {
        system("cls");
        system("color 04");
    }
    else {;
        system("cls");
        cout << "Ошибка";
        Sleep(1000);
        system("cls");
    }
}

void clear() {
    system("cls");
    cout << "Консоль очищена";
}

int DateInt() {
    return 5;
}

char DateChar() {
    return 'a';
}

double DateDouble() {
    return 2.56;
}

float DateFloat() {
    return 3.543;
}

bool DateBool() {
    return true;
}

string HelloFunc() {
    return "Привет, я функция";
}

void Kvad() {
    char sumb;
    cout << "\n\n\t\t\t\t  Выберите какими символами вы хотите вывестии квадрат: ";
    cin >> sumb;
    system("CLS");

    for (int visota = 0; visota < 5; visota++) {
        for (int shirina = 0; shirina < 5; shirina++) {
            cout << sumb << " ";
        }
        cout << "\n";
    }
}

int main() {
    while (true)
    {

        setlocale(0, "");
        cout << "[+] Программа ""Функции""\n\n[1] Очищение консоли\n[2] Изменить цвет фона\n[3] Изменить цвет текста\n[4] Вывод размера типа данных INT\n[5] Вывод размера типа данных CHAR\n[6] Вывод размера типа данных DOUBLE\n[7] Вывод размера типа данных FLOAT\n[8] Вывод размера типа данных BOOL\n[9] Вывод сообщения ""Привет, я функция""\n[10] Вывод квадрата 5x5\n[+] Введите значение: ";
        int menu;
        cin >> menu;
        if (menu == 1) {
            clear();
        }
        else if (menu == 2) {
            collor();
        }
        else if (menu == 3) {
            collortext();
        }
        else if (menu == 4) {
            system("cls");
            cout << DateInt();
            Sleep(3000);
            system("cls");
        }
        else if (menu == 5) {
            system("cls");
            cout << DateChar();
            Sleep(3000);
            system("cls");
        }
        else if (menu == 6) {
            system("cls");
            cout << DateDouble();
            Sleep(3000);
            system("cls");
        }
        else if (menu == 7) {
            system("cls");
            cout << DateFloat();
            Sleep(3000);
            system("cls");
        }
        else if (menu == 8) {
            system("cls");
            cout << DateBool();
            Sleep(3000);
            system("cls");
        }
        else if (menu == 9) {
            system("cls");
            cout << HelloFunc();
            Sleep(3000);
            system("cls");
        }
        else if (menu == 10) {
            system("cls");
            Kvad();
            Sleep(3000);
            system("cls");
        }
    }
    return main();
}
