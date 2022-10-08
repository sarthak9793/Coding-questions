//                          Print prime factors (--my version)
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
//We know that a number can be written as product of its prime factors. We loop from i=2 <------> i<=num and if "i" is prime, we eliminate all i's from num and 
//print them
void printPrimeFactors(int num){
    for(int i = 2 ; i<=num ; i++){
        if(checkPrime(i)){  //The difference between this and the efficient solution is this single line which calls checkPrime()
            while(num%i==0){
                cout<<i<<endl;
                num = num/i;
            }
        }
    }
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    printPrimeFactors(num);
    
}
// Overall time complexity = O(n*sqrt(n)*logn)



