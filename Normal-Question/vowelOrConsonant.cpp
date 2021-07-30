#include<iostream>

using namespace std;

int main(){

//Write a program to find whether a given character is a vowel or a
//consonant

    char ch;cin>>ch;

    if (ch=='a' || ch=='e' || ch=='o' || ch=='u' ||ch=='i')
    {
        cout<<"character is vowel"<<endl;

    }else{
        cout<<"Character is consonant "<<endl;
    }
    



    return 0;
}