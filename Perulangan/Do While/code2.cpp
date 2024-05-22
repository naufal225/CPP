#include<iostream>
using namespace std;
int main() {
	int i = 0;
	do {
		i++;
		cout << "Perulangan ke-"<< i << endl;
	} while (i<10); //perulangan akan mencetak sampai i = 10 karena pengecekan dilakukan belakangan
	
	return 0;
}
