#include <iostream>

int countWays(int target, int maxJumpLen = 3) {
	//База: если n == 0, то есть 1 способ - остаться на текущей ступеньке
	if (target == 0) {
		return 1;
	}

	//База: если n < 0, способов нет
	if (target < 0) {
		return 0;
	}

	//Рекурсивно подсчитываю количество способов
	int ways = 0;
	for (int step = 1; step <= maxJumpLen; ++step)	{
		ways += countWays(target - step, maxJumpLen);
	}
	
	return ways;

}

int main() {
	setlocale(LC_ALL, "Russian");

	int target = 3;// Будет целевая ступенька

	int maxJumpLen = 2;// Максимальная длина прыжка

	std::cout << "Количество способов: " << countWays(target, maxJumpLen) << std::endl;

	return 0;
}