//                                              Number of digits in an integer (Mathematical solution)
#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    if(n>0){
        int count = floor(log10(n));
        return count+1;
    }
    return -1; //This solution only works for natural numbers, for others it will simply return -1
}


int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<countDigit(num);
}

