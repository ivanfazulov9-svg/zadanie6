//Вариант 20 В тексте представлены шестнадцатеричные коды цветов.Примеры цветов :
//#f6F601, #000000, #fff, #A8A8A8.Вывести на экран все цвета, встречающиеся
//в тексте.

#include <iostream>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string str, color;
	int i = 0, j = 0;
	cout << "Введите строку\n";
	getline(cin, str);
	cout << "Ваша строка: " << str << "\n";
	for (i; i < str.length(); i++) {
		if (str[i] == '#') {
			color = '#';
			j = i + 1;
			while (j < str.length() && ((str[j] >= '0' && str[j] <= '9') || (str[j] >= 'A' && str[j] <= 'F') || (str[j] >= 'a' && str[j] <= 'f'))) // проверка, что символ это шестнадцатеричная цифра и что позиция символа меньше длины строки
			{
				color += str[j];
				j += 1;
			}
			if (color.length() == 7 || color.length() == 4) { //проверка, что найденная последовательность символов равна 6 или 3 знакам после решетки, т.е. является цветом
				cout << "Найденный цвет: " << color << "\n";
			}
			i = j - 1;
		}
	}
	system("pause");
}
