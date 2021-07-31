
//Conversion From Binary to Decimal 

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int num;cin>>num;
    int r;
    int ans=0;
    int p=0;
    while(num!=0){
        r=r%10;
        num=num/10;
        ans+=r*pow(2,p);
        cout<<ans<<endl;
        p++;
    }

    cout<<ans<<endl;

    return 0;
}