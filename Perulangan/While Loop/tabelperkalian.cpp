#include <iostream>
using namespace std;
int main() {
	int i = 1;
	while(i<=10){
		int j = 1;
		while(j<=10){
			cout << j << " * " << i << " = " << i*j << endl;
			j++;
		}
		cout << endl;
		i++;
	}
}
