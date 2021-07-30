#include<iostream>

using namespace std;

int main(){

//Write a program to display all factors of a number


    int n;cin>>n;

    cout<<"Factor of number "<<n<<endl;

    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<endl;
        }
    }



    return 0;
}