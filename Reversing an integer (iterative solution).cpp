//                                                              Program to reverse an integer (iterative solution)
#include<iostream>
#include<cmath>
using namespace std;

int reverse(int num){
    int rev=0;
    while(num!=0){
        rev = (rev*10)+(num%10);
        num = num/10;
    }
    return rev;
}

int main(){
    int num;
    cout<<"Enter Num: ";
    cin>>num;
    
    cout<<"Reverse is: "<<reverse(num);
}

// Time complexity = O(d)


