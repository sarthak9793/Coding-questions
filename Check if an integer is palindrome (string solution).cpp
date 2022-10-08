//                                                      Check if an integer is palindrome (using strings)

#include<iostream>
#include<string>
using namespace std;

bool palindromeCheck(int num){
    string str = to_string(num);
    for(int i=0 ; i<(str.length()/2) ; ++i) {
        if(str[i]!=str[str.length()-1-i]){
            return false;
        }
    }
    return true;
}


int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    if(num<0){
        num = num*-1;
        cout<<"Number is a palindrome(T/F)?: "<<palindromeCheck(num);
    }
    else
        cout<<"Number is a palindrome(T/F)?: "<<palindromeCheck(num);
    
}

// Time complexity  = O(floor(d/2)) = O(d)


