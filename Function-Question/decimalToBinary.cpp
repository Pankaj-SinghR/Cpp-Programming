//Conversion From Decimal To Binary 

#include<iostream>

using namespace std;

int dec2bin(int n){

    int ans=0;
    int bin=0;
    int i=1;
    while(n!=0){
        bin += (n % 2)*i;
        n /= 2;
        i *= 10;
    }

    cout<<bin;
    return ans;
}


int main(){
    
    int n;cin>>n;
    dec2bin(n);

    return 0;
}