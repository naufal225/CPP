#include<iostream>
using namespace std;
int main(){
	int n,i,j,k;
	cout<<"Masukan Jumlah Baris: ";
	cin>>n;
	i=1;
	while(i<=n){
		k=n-i;
		while(k>0){
			cout<<" ";
			k--;
		}
		j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
}
