//                              Print prime factors (without duplication --my version)
#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int num){
    if(num==0 || num==1)
        return false;
    if(num==2 || num==3 || num==5)
        return true;
    if(num%2==0 || num%3==0 || num%5==0)
        return false;
    for(int i=7; i<=sqrt(num) ; ++i){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

void printPrimeFactors(int num){
    for(int i = 2 ; i<=num ; i++){
        if(checkPrime(i)){
            if(num%i==0)
                cout<<i<<endl;
        }
    }
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    printPrimeFactors(num);
    
}


