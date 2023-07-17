#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"How many lines do you want to print?"<<endl;
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}