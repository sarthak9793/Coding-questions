//                                                          Computing Power (iterative solution)

#include<iostream>
using namespace std;

int powerFunction(int base, int power){
    int result = base;
    
    if(power==0)
        return 1;
    if(power==1)
        return base;
    for(int i = 1 ; i<power ; i++){
        result=result*base;
    }
    
    return result;
}

int main(){
    int base, power;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter power: ";
    cin>>power;
    
    cout<<powerFunction(base,power);
}

// Time complexity = O(power)
