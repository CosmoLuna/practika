// ������������ ������ ������� �++
#include <iostream>
#include <conio.h>
#include "windows.h"
using namespace std;

unsigned int timer = 0;

int main() {
	setlocale(LC_ALL, "Russian");



	char sym;
	/*while (true) {
		sym = _getch(); // ���� ��� _getche, ��� ��������� ��� ������ �������
		cout << "������ " << sym << endl;

	}
*/
	while (true) {
		if (_kbhit()) {

			sym = _getch();
			switch (sym) {
			case'a': case 'A': system("cls"); cout << "��� �����\n"; break;
			case 'd': case 'D': system("cls"); cout << "��� ������\n"; break;
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