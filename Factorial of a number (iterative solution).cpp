//                                              Factorial of a number (iterative solution)
// much simpler than mine

#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    if(num==0 || num==1)
        return 1;
    for(int i=2 ; i<=num ; ++i){
        fact *= i;
    }
    return fact;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<"The factorial is: "<<factorial(num);
    
}
// Time complexity is O(n)
// Both iterative and recursive solution take 0(n) time but Iterative solution is considered better because first it takees 0(1) auxillary space whereas 
// recursive solution takes 0(n) auxillary space, also the recursive solution causes extra overhead


