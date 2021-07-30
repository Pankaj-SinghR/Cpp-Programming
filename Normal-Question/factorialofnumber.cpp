#include<iostream>

using namespace std;

int main(){

//Write a program to find the factorial of a given number

    int n;cin>>n;
    int fact=1;
    for(int i=n;i>1;i--){
        fact *= i;
    }
    cout<<fact<<endl;



    return 0;
}