#include<iostream>

using namespace std;

int main(){

    int n;cin>>n;
    int r;
    while(n!=0){
        r=n%10; //remainder;
        n=n/10; //quotient
        cout<<r; 
    }
    cout<<endl;

    return 0;
}
