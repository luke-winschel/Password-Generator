#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;
static const char AlphaNumeric[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

static const char SpecialCharacter[] = "!.*-/_0123456789AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

int MyLen = sizeof(AlphaNumeric) - 1;

char RandomString() {
	return AlphaNumeric[rand() % MyLen];
}

char StringSpecial() {
	return SpecialCharacter[rand() % MyLen];
}

int main() {
	srand(time(0));
	int l;
	int i = 0;
	int p;
	char answer;
	cout << "How many passwords do you need? (Enter Number): ";
	cin >> p;
	cout << "How many characters do your password(s) need to be? (Enter a number): ";
	cin >> l;
	cout << "Does your password(s) require a special character? (Y/N): ";
	cin >> answer;
	
		if (answer == 'y' || answer == 'Y') {
			while (i < p) {
				for (int m = 0; m < l; m++)
					cout << StringSpecial();
				cout << endl;
				i++;
			}
		}
		else if (answer == 'n' || answer == 'N') {
			while (i < p) {
				for (int m = 0; m < l; m++)
					cout << RandomString();
				cout << endl;
				i++;
			}
		}
		else {
			cout << "Invalid Input please enter Y or N ";
		}
		cout << "\n";
		return 0;
}
