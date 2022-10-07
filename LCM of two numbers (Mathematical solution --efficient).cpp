//                                                  LCM of two numbers (Mathematical solution --efficient)
// We (should) know that a*b = lcm(a,b) * gcd(a,b)
#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}// Time complexity of EUCLIDEAN ALGO is O(log(min(a,b)))

int lcm(int a, int b){
    return (a*b)/(gcd(a,b));
}//constant time complexity

int main(){
    int num1, num2;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    
    
    cout<<"LCM is: "<<lcm(num1,num2);
    
}
//Overall Time complexity is O(log(min(a,b)))

