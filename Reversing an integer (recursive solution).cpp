//                                                              Program to reverse an integer(recursive solution)
#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int reverse(int num){
    
    if(num/10==0)
        return num;
    return (num%10)*pow(10, countDigit(num)-1) + reverse(num/10);
}


int main(){
    int num;
    cout<<"Enter Num: ";
    cin>>num;
    
    cout<<"Reverse is: "<<reverse(num);
}


