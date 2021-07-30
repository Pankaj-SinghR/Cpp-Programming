#include<iostream>

using namespace std;

void checkAlpha(char ch){

    if ((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
    {
        cout<<"Given Character Is Aphabet "<<endl;
    }else{
        cout<<"Given Character Is Not-Aphabet "<<endl;
    }
    
}



int main(){

    char ch;cin>>ch;                                      
    
    checkAlpha(ch);

    return 0;
}