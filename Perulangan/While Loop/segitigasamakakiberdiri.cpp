#include<iostream>
using namespace std;
int main(){
	int i,j,k,n;
	cout<<"Masukan tinggi: ";
	cin>>n;
	i=1;
	while(i<=n){
		j=1;
		k=n-i;
		while(k>0){
			cout<<" ";
			k--;
		}
		while(j<=i){
			cout<<"* ";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
