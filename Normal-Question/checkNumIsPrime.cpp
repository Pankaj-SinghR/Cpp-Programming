#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    bool check;

    if(n==2 or n==1 or n==3){
        cout<<"Number is Prime"<<endl;
        return 0;
    }

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n%i==0)
        {
            check=true;
            break;
        }else
            check=false;        
    }

    if(check==false)   
        cout<<"Number is Prime"<<endl;
    else   
        cout<<"Number is not Prime"<<endl;
    

    return 0;
}