//                                             Print prime numbers upto n (Sieve of Eratosthenes method)
// If we want to find prime numbers upto n, we will first create an array that runs from 0 to n i.e. its size should be n+1
// The array will represent all the numbers i.e. if they are prime or not. 
// marked(1) elements represent composite numbers and unmarked(0) elements represent prime numbers

/* The idea of Sieve of Eratosthenes is that we will first take 2(because its the first prime number) and mark all multiples of 2, then we move on to the next 
   unmarked element which is 3 and mark all multiples of 3, then we move on to the next unmarked elements which is 5 and mark all multiples of 5 and so on*/
   
#include<iostream>
using namespace std;

void printPrime(int num){
    int prime[num+1] = {0};// We have initialized all elements of the array to 0
    for(int i = 2 ; i<=num ; i++){
        if(prime[i] == 0){
            for(int j = i*i ; j<=num ; j = j+i){//We are starting from i^2, because numbers lower than i^2 would have already been marked by previous 
                                               //prime numbers(or you can say by previous unmarked elements)
                prime[j] = 1;
            }
        }
    }
    for(int i = 2 ; i<=num ; i++){
        if(prime[i]==0)
            cout<<i<<endl;
    }
    
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    printPrime(num);
}

// Time complexity = O(log(log(n))) : Its a big derivation so dont give a fuck about it
//log(log(n)) grows very very slow, so we can say that its almost linear, this is much much better than the naive approach which had a time complexity = O(n^3/2)



