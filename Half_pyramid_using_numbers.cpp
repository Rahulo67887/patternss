#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"How many lines do you want to print?"<<endl;
    cin>>n;

    for(int i=n; i>=1; i--){
        int k=1;
        for(int j=1; j<=i; j++){
            cout<<k;
        }
    
        cout<<endl;
    }

    return 0;
}