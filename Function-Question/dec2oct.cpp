#include<iostream>

using namespace std;

int dec2oct(int n){
    int ans = 0 ;
    int i=1;

    while (n!=0)
    {
        ans += (n%8)*i;
        n /= 8;
        i *= 10;
    }

    return ans;
}



int main(){
    int n;cin>>n;

    cout<<"Octal "<<dec2oct(n)<<endl;

    return 0;
}