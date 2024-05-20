#include<iostream>
using namespace std;
int main() {
    int n;
    char character = 'a';
    cout<<"Masukan Baris: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            if(j%2==0){
                cout<<char(character-32);
            } else {
                cout << character;
            }
            character++;
        }
        cout << endl;
    }
    return 0;
}
