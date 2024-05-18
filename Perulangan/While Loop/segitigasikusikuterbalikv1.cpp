#include<iostream>
using namespace std;
int main(){
	int i = 1;
	while(i<=9){
		int j = 7;
		while(j>i){
			if(j<i){
				cout << " ";
			} else {
				cout <<"*";
			}
			j--;
		}
		i++;
		cout << endl;
	}
}
