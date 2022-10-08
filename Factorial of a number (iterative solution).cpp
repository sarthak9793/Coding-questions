//                                              Factorial of a number (iterative solution)
// much simpler than mine. Basically instead of calculating factorial in descending order, we are calculating it in ascending order

#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    if(num==0 || num==1)//This line is totally unnecessary, as when value of i<2 i.e. 0 or 1, we wouldnt have entered the loop and the function would return the original value of 
                        //fact which is 1. I just wrote that line to make the program more readable
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
// Time complexity = O(n)
// Both iterative and recursive solution take 0(n) time but Iterative solution is considered better because first it takees 0(1) auxillary space whereas 
// recursive solution takes 0(n) auxillary space, also the recursive solution causes extra overhead



