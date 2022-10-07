//                                                          GCD of a two numbers (iterative solution --my version --naive method)

#include<iostream>
using namespace std;

int gcd(int num1, int num2){
    int gcd = 0;
    if(num1 == 0) //This is exclusively to deal when 0 is the first input, because before in such cases we were getting 0 as answer which is wrong
        return num2;
    for(int i=1 ; i<=num1 ; ++i){
        if(num1%i==0)
            if(num2%i==0)
                gcd = i;
    }
    return gcd;
}

int main(){
    int num1, num2;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    
    
    cout<<"GCD(HCF) is: "<<gcd(num1,num2);
}
// We can make the program take integers, that would just involve making the numbers positive before passing them into the function


