//                                                  Check for prime number (iterative solution --efficient --optimized)
// For large values of num, We can save many iteration by adding additional checks like if(n%2==0 || n%3==0 || n%5==0) then return false

#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int num){
    if(num==0 || num==1)//To deal with 0 and 1, both of which are not prime
        return false;
    
    // Optimization
    if(num==2 || num==3 || num==5)//To return true for 2,3,5, cuz otherwise the new optimization would have returned false
        return true;
    if(num%2==0 || num%3==0 || num%5==0)
        return false;
        
    for(int i = 7; i<=sqrt(num) ; ++i)
        if(num%i==0)
            return false;
    return true;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<"Is the number prime?: "<<checkPrime(num);
}

// Time complexity = O(sqrt(n))



