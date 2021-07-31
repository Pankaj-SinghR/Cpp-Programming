

//Check Pythagorian triplet

#include<iostream>
#include<math.h>

using namespace std;



//findMax() : Function find maximum number

bool findMax(int x,int y,int z){
    
    int maxi=max(x,y,z);
    bool val;
    if(maxi==x){
        val = checkIf(x,y,z);
        return val;
    }
    else if(maxi==y){
        val = checkIf(y,x,z);
        return val;
    }
    else{
        val = checkIf(z,x,y);
        return val;
    }

}

//Main function

int main(){

    int x,y,z;cin>>x>>y>>z;

    if(findMax(x,y,z)) 
    {
        cout<<"True"<<endl; //Print True if x,y,z are triplet
    }else{
        cout<<"False"<<endl; //Print False if not triplet 
    }
    


    return 0;
}
