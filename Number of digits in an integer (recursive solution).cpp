//                                                      Number of digits in an integer (recursive solution)
#include<iostream>
using namespace std;

int countDigit(int n){
    if (n==0)
        return 0;
    
    return 1+countDigit(n/10);
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<countDigit(num);
    
}

// Time complexity  = O(log n)

