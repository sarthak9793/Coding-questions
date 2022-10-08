                                                            // Print divisors of a number(sorted)
/* 30: (1,30), (2,15), (3,10), (5,6)
   65: (1,65), (5,13)
   25: (1,5), (5,5)
   I notice some additional properties of these divisor pairs that will help hus to solve this problem
        1) If the smaller pair elements are in ascending order the larger pair elements are automatically in descending order
        2) The largest of the smaller pair element is less than or equal to than the smallest of the larger pair element
*/
   
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


