#include<iostream>
using namespace std;

int main(){
    int row,col;

    cout<<"HOw many rows do you want to print?"<<endl;
    cin>>row;

    cout<<"HOw many columns do you want to print?"<<endl;
    cin>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(j==1 || j==col || i==1 || i==row){
                cout<<"*";
            }
            else{cout<<" ";}
        }
        cout<<endl;
    }

    return 0;
}