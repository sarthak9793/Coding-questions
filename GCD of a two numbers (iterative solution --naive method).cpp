//                                                          GCD of a two numbers (iterative solution --naive method)

#include<iostream>
using namespace std;

int gcd(int num1, int num2){
    int gcd = min(num1, num2); //We know at max gcd can be the minimum of the two numbers
    if(min(num1, num2)==0) //This line is exclusively to deal with 0 as input for either num1 or num2, because in such cases we were getting 0 as answer which is wrong
        return max(num1, num2);
    while(gcd>0){
        if(num1%gcd==0 && num2%gcd==0)
            break;
        --gcd;
    }
    return gcd;
}

int main(){
    int num1, num2;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    
    
    cout<<"GCD(HCF) is: "<<gcd(num1,num2);
}
// We can make the program take integers, that would just involve making the numbers positive before passing them into the function
// Time complexity is O(min(num1, num2))


