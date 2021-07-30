
#include<iostream>

using namespace std;

int maxNum(int x,int y,int z){
        
        if( x > y && x > z )
            return x;
        else if( y > x && y > z)
            return y;
        else    
            return z; 
}


int minNum(int x,int y,int z){


        if(x < y && x < z)
            return x;
        else if( y < x && y < z)
            return y;
        else    
            return z; 
}




int main(){

    int x,y,z;cin>>x>>y>>z;

    cout<<"Maximum number is "<<maxNum(x,y,z)<<endl;
    cout<<"Minimum number is "<<minNum(x,y,z)<<endl;



    return 0;
}