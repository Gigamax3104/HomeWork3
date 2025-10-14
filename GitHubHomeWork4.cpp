#include	<iostream>
#include	<list>
#include	<cstring>
using	namespace std;

const int MAX_SIZE = 18;

char* strrmv_digits(char* s);

int main() {
	int size = 0;
	char Code[MAX_SIZE];
	char* Code2;

	do{
		size = 0;

		cout << "•¶Žš“ü—Í >" << flush;
		cin >> Code;

		for (int i = 0; i < sizeof Code; i++) {
			if (Code[i] == '\0') {
				break;
			}
			size++;
		}

	} while (size < 8);

	Code2 = strrmv_digits(Code);

	cout << Code2 << endl;

	//for (int i = 0; i < size;i++) {
	//	cout << *(Code2 + i) << flush;
	//}
}

char* strrmv_digits(char* s) {
	for (int i = 0; *(s + i) != '\0';) {
		if (*(s + i) >= '0' && *(s + i) <= '9') {
			for (int j = i; *(s + j) != '\0'; j++) {
				*(s + j) = *(s + (j + 1));
			}
		}
		else {
			i++;
		}

	}

	return s;
}
