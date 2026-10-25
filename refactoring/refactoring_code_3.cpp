#include <iostream>
#include <cstdlib>
const int size = 20;

void print_array(int a[]) {
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
}

int main() { 
    int a[size];
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 20;
    }
    std::cout << "\n" << "----Обработка массива----" << std::endl;
    std::cout << "Исходный массив:  ";
    print_array(a);

    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = a[i];
        a[i] = a[(size - 1) - i];
        a[(size - 1) - i] = temp;
    }
    std::cout << "Перевёрнутый массив:  ";
    print_array(a);
    std::cout << "\n";

    return 0;
}