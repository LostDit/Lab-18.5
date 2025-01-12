#include <iostream>

void evendigits(long long n, int& ans) {
    // База: если число равно 0, завершаем рекурсию
    if (n == 0) {
        return;
    }

    //Проверяем, является ли последняя цифра чётной
    if ((n % 10) % 2 == 0) {
        ++ans;
    }

    //Рекурсивно обрабатываю оставшуюся часть числа
    evendigits(n / 10, ans);
}

int main()  {
    setlocale(LC_ALL, "Russian");

    long long n = 9223372036854775806; //Пример числа
    int ans = 0;

    evendigits(n, ans);

    std::cout << "Количество четных цифр: " << ans << std::endl;

    return 0;
}
