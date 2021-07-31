
//conversion from octal to decimal

#include<iostream>
#include<math.h>

using namespace std;


//function to convert octal to decimal
int octToDec(int num){

    int r;
    int ans=0;
    int p=0;
    while(num!=0){
        r=num%10;
        num=num/10;
        ans+=r*pow(8,p);
        p++;
    }

return ans;

}

//main function
int main(){

    cout<<"Enter The Octal Number"<<endl;
    int num;cin>>num;

    cout<<"Octal : "<<num<<endl;
    cout<<"Decimal : "<<octToDec(num)<<endl;


    return 0;
}