#include<iostream>
using namespace std;
int main(){
	int i,j,k,n;
	cout<<"Masukan tinggi: ";
	cin>>n;
	i=n;
	while(i>0){
		j=i;
		k=n-i;
		
		while(k>0){
			cout<<" ";
			k--;
		}
		
		while(j>0){
			cout<<"* ";
			j--;
		}
		
		i--;
		cout<<endl;
	}
	return 0;
}
