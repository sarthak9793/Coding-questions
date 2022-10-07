//                                              Factorial of a number (iterative solution -- my version)

#include<iostream>
using namespace std;

int factorial(int num){
    int fact = num;
    if (num==0)
        return 1;
    while(num>1){
        fact =  fact * (num-1);
        num = num - 1;
    }
    return fact;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<"The factorial is: "<<factorial(num);
    
}
