#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	// Объявляем переменные: первое число, второе число и тип операции между ними
	float firstNumber;
	float secondNumber;
	char operation;

	// Инициализируем наши переменные с помощью пользовательского ввода cin >> 
	cout << "Введите первое число: ";
	cin >> firstNumber;

	cout << "\nВведите второе число: ";
	cin >> secondNumber;

	cout << "\nВведите операцию (+, -, *, / , %): ";
	cin >> operation;

	// Проверяем если пользователь решил поделить на 0, и завершаем программу, если это так
	if (secondNumber == 0 && (operation == '/' || operation == '%')) {
		cout << "\n\x1b[91mОшибка!\x1b[0m Делить на 0 нельзя.\n\n";
		return 0; // В этой строке завершаем программу
	}

	// Рассчёт и вывод примера
	if (operation == '+')
		cout << "\n" << firstNumber << " + " << secondNumber << " = " << "\x1b[95m" << firstNumber + secondNumber << "\x1b[0m\n";
	else if (operation == '-')
		cout << "\n" << firstNumber << " - " << secondNumber << " = " << "\x1b[95m" << firstNumber - secondNumber << "\x1b[0m\n";
	else if (operation == '*')
		cout << "\n" << firstNumber << " * " << secondNumber << " = " << "\x1b[95m" << firstNumber * secondNumber << "\x1b[0m\n";
	else if (operation == '/')
		cout << "\n" << firstNumber << " / " << secondNumber << " = " << "\x1b[95m" << firstNumber / secondNumber << "\x1b[0m\n";
	else if (operation == '%')
		cout << "\n" << firstNumber << " % " << secondNumber << " = " << "\x1b[95m" << (int)firstNumber % (int)secondNumber << "\x1b[0m\n";
	
	// Завершение программы через ввод любого значения (вместо endProgram может быть любое название)
	cout << "\n\nВведите что-нибудь для \x1b[91mзавершения программы\x1b[0m: ";
	short endProgram; cin >> endProgram;
	return 0;
}