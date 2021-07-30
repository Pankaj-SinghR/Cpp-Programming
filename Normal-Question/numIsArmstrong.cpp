#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n;cin>>n;
    int val=n;
    int r;
    int sum=0;

    while(n!=0){
        r=n%10;
        n=n/10;
        sum+=pow(r,3);
    }

    if(sum==val)
        cout<<"Number Is Armstrong";
    else    
        cout<<"Number Is Not Armstrong";

    cout<<endl;

    return 0;
}