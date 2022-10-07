//                                                      Check if n integer is palindrome (using reverse integer)
#include<iostream>
using namespace std;

int reverse(int num){
    int rev=0;
    while(num!=0){
        rev = (rev*10)+(num%10);
        num = num/10;
    }
    return rev;
}

bool palindromeCheck(int num){
    int flag = 0;
    if(num == reverse(num)){
        flag = 1;
        return true;
    }
    return false;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<"Number is a palindrome: "<<palindromeCheck(num);
}


