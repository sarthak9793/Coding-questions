//                                                      GCD of two numbers (Euclidean algorithm)
#include<iostream>
using namespace std;

// 'a' has to be the larger one in this algorithm
int gcd(int a, int b){
    
    if(min(a,b)==0) //this line is exclusively to deal when either a or b is zero
        return max(a,b);
    
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int main(){
    int num1, num2;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    
    
    cout<<"GCD(HCF) is: "<<gcd(num1,num2);
}
