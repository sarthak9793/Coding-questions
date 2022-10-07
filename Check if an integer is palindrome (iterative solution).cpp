//                                                Check if an integer is palindrome (iterative solution)
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

int palindromeCheck(int num){
    int count = countDigit(num);
    int firstDigit, lastDigit;
    for(int i=0 ; i<count ; ++i){
        firstDigit = num/(pow(10,count-1));
        lastDigit = num%10;
        if(firstDigit!=lastDigit){
            return false;
        }
    }
    return true;
}


int main(){
    int num;
    cout<<"Enter Num: ";
    cin>>num;
    
    cout<<"Number is a palindrome: "<<palindromeCheck(num);
}


