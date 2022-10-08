//                                                  Factorial of a number (recursive solution)

#include<iostream>
using namespace std;

int factorial(int num){
    if(num<=1)
        return 1;
    return num*factorial(num-1); //this is very easy to remember as it is identical to the mathematical formula itself
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<"The factorial is: "<<factorial(num);
    
}

// Time complexity is T(n) = T(n-1) + c
// Calculate using recursive tree method = O(n)

