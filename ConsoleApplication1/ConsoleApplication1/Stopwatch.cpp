#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;


int main() {
	cout << "Start the stopwatch (y/n)? (F1 to Reset time)." << endl;
	char input = {};
	cin >> input;
	bool stopwatch;

	if (input == 'y' || input == 'Y') {
		stopwatch = true;
	}
	else {
		cout << "invalid input." << endl;
		stopwatch = false;
	}

	while(stopwatch) {
	for (int i = 0; i < 9999999999999; i++) {
		int time = 0;
		Sleep(1000);
		time += i;
		system("cls");
		cout << time << " seconds." << endl;
		cout << "\nPress F1 to Reset." << endl;
		if (GetAsyncKeyState(VK_F1)) {
			break;
		}

	}
	}

}