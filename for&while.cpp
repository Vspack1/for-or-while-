#include <iostream>
#include <string>
using namespace std;
//Ham dem so ky tu bang vong lap for

void demsolanxuathien(const string chuoi, char kytu) {
	int count = 0;
	char lowerChar = tolower(kytu);
	char upperChar = toupper(kytu);

	// Duyet tung ky tu trong chuoi for 
	for (int i = 0; i < chuoi.length(); i++) {
		if ((chuoi[i]) == lowerChar || chuoi[i] == upperChar) {
			count++;
		}
	}
	cout << "Ki tu " << kytu << " xuat hien " << count << " lan." << endl;
}

void demsolanxuathiennhmadungwhile(const string chuoi, char kytu) {
	int count = 0;
	int i = 0;
	char lowerChar = tolower(kytu);
	char upperChar = toupper(kytu);

	// Duyet tung ky tu trong chuoi while
	while (i < chuoi.length()) {
		if ((chuoi[i]) == lowerChar || chuoi[i] == upperChar) {
			count++;
		}
		i++;
	}
	cout << "Ki tu " << kytu << " xuat hien " << count << " lan." << endl;
}

int main() {
	string chuoi;
	char kytu;

	cout << "Nhap vao 1 chuoi: " << endl;
	getline(cin, chuoi);

	cout << "Nhap vao mot ky tu de dem: " << endl;
	cin >> kytu;

	demsolanxuathien(chuoi, kytu);
	demsolanxuathiennhmadungwhile(chuoi, kytu);

	return 0;
}