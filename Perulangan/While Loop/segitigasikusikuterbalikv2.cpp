#include <iostream>
using namespace std;
int main() {
	int n,i,j;
	cout << "Masukan Banyak Baris: ";
	cin>>n;
	i=n;
	while(i>0){
		j=i;
		while(j>0){
			cout << "*";
			j--;
		}
		i--;
		cout<<endl;
	}
}
