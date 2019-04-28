//Надо ввести кол-во чисел изначально
#include <iostream>
#include <windows.h> //чтоб всё норм выводилось

using namespace std; //чтобы каждый раз не вводить std::

//точка входа
int main() {
    SetConsoleCP(1251); //чтоб всё норм выводилось
    SetConsoleOutputCP(1251); //чтоб всё норм выводилось

    int count_number = 0; //переменнная для количества чисел
    int odd_number_count = 0; //переменная для количества нечётных чисел
    int k = 0; //инициализируем счетчик цикла

    cout << "Введите кол-во чисел (count_number): ";
    cin >> count_number;

    cout << "Введите числа: ";
    //Цикл с предусловием
    while (k < count_number) {
        int q = 0; //переменная для самого числа
        cin >> q;
        if (q % 2 != 0) {
            odd_number_count++;
        } //проверяем на нечётность, если нечётно, то +1 к кол-ву неч.чисел
        k++; //инкрементируем счётчик цикла
    }

    cout << "Вы вели нечётных чисел: " << odd_number_count;
    return 0;
}
