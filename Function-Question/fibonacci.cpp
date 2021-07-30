//Write a program to print Fibonacci sequence.

#include<iostream>

using namespace std;

void fibo(int n){
    int first=0;
    int second=1;
    int third;

    cout<<first<<" "<<second<<" ";

    for (int i=1; i<n; i++)
    {
        third = first + second;
        cout<<third<<" ";
        first = second;
        second = third;
    }
    cout<<endl;

}


int main(){

    int n;cin>>n;

    //function calling
    fibo(n);

    return 0;
}