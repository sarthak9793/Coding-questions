                                                            // Print divisors of a number(sorted)
#include<iostream>
#include<cmath>
using namespace std;

void printDivisors(int num){
    for(int i=1 ; i<=sqrt(num) ; i++){
        if(num%i==0){
            cout<<i<<endl;
        }
    }
    for(int i=sqrt(num) ; i>=1 ; i--){
        if(num%i==0){
            if(num/i!=i)
                cout<<num/i<<endl;
        }
    }
}


int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    printDivisors(num);
}

// Time complexity = O(2sqrt(n)) = O(sqrt(n))

