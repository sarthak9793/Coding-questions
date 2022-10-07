                                                            // Print divisors of a number(unsorted)
#include<iostream>
#include<cmath>
using namespace std;

void printDivisors(int num){
    for(int i=1 ; i<=sqrt(num) ; i++){
        if(num%i==0){
            cout<<i<<endl;
            if(num/i!=i)
                cout<<num/i<<endl;//If you dont understand this step check the comments of the program "Check for prime number (iterative solution --efficient)"
        }
    }
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    printDivisors(num);
}

// Time complexity = O(sqrt(n))



