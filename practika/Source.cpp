// Персональный шаблон проекта С++
#include <iostream>
#include <conio.h>
#include "windows.h"
using namespace std;

unsigned int timer = 0;

int main() {
	setlocale(LC_ALL, "Russian");



	char sym;
	/*while (true) {
		sym = _getch(); // есть еще _getche, там выводится сам символ вначале
		cout << "Нажато " << sym << endl;

	}
*/
	while (true) {
		if (_kbhit()) {

			sym = _getch();
			switch (sym) {
			case'a': case 'A': system("cls"); cout << "Шаг влево\n"; break;
			case 'd': case 'D': system("cls"); cout << "Шаг вправо\n"; break;
			}
		}
		Sleep(100);
		timer += 100;
		if (timer >= 1000) {
			cout << ".\n";
			timer = 0;
		}
	}





	return 0;
}