
//Sum of first n natural number

#include<iostream>

using namespace std;


int sumOfn(int n){
    
    int sum = (n*(n+1))/2;
    
    return sum;
}


int main(){

    int n;cin>>n;

    cout<<"Sum of "<<n<<" natural no. is "<<sumOfn(n)<<endl;


    return 0;
}