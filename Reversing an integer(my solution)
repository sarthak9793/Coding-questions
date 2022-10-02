//                                                              Program to reverse an integer
// unnecessarily complex but my solution(also iterative)
#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int num){
    int count=0;
    while(num!=0){
        num=num/10;
        count++;
    }
    return count;
}

int reverse(int num){
    int count = countDigit(num);
    int rev=0;
    while(num>=10){
        rev += (num%10)*pow(10, count-1);
        num=num/10;
        count--;
    }
    rev = rev+num;
    return rev;
}

int main(){
    int num;
    cout<<"Enter Num: ";
    cin>>num;
    
    // This part was added to deal with negative numbers
    if(num<0){
        num = num*-1;
        cout<<"Reverse is: "<<reverse(num)*-1;
    }
    else
        cout<<"Reverse is: "<<reverse(num);
    
}


