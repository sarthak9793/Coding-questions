//                                                      GCD of two numbers (Euclidean algorithm --optimized)
// This code is so elegant that we dont even need to check if a>b or b>a, because if b>a, the program simply swaps the two numbers in the first iteration

#include<iostream>
using namespace std;


int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main(){
    int num1, num2;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    
    if(min(num1, num2) == 0)//This line is exclusively to deal when either num1 or num2 is 0. I couldn't find a way to place this in the function since the function 
                            //is recursive
        cout<<"GCD(HCF) is: "<<max(num1,num2);
    
    else 
        cout<<"GCD(HCF) is: "<<gcd(num1,num2);
}

// Time complexity of EUCLIDEAN ALGO is O(log(min(a,b)))



