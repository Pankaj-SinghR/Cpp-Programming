
//Conversion From Binary to Decimal 

#include<iostream>
#include<math.h>

using namespace std;

int convertBintoDec(int num){
    int r;
    int ans=0;
    int p=0;
    while(num!=0){
        r=num%10;
        num=num/10;
        ans+=r*pow(2,p);
        p++;
    }
    
    return ans;
}


int main(){

    int num;cin>>num;

    cout<<"Decimal of "<< num <<" is"<<convertBintoDec(num);

    return 0;
}