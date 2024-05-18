#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int i = 1;
	while(i <= 10) {
		int hasil = pow(i, 2);
		cout << i << "^2 = " << hasil;
		cout << endl; 
		i++;
	}
}
