//                                                  Check for prime number (iterative solution)
#include<iostream>
using namespace std;

bool checkPrime(int num){
    
    if(num==0 || num==1)//To deal with 0 and 1, both of which are not prime
        return false;
    
    for(int i = 2 ; i<=num/2 ; ++i){
        if(num%i == 0)
            return false;
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<"Is the number prime?: "<<checkPrime(num);
}

// Time complexity = O(n)
