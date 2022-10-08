//                                                  LCM of two numbers (iterative solution --naive solution)
#include<iostream>
using namespace std;

int lcm(int a, int b){
    // We (should) know that the lcm of two number is greater than or equal to the max of two numbers and at max lcm = a*b
    
    int lcm = max(a,b);
    
    if(min(a,b) == 0)//This line is exclusively to deal when either a or b is zero
        return 0;
    
    while(true){
        if(lcm%a == 0 && lcm%b == 0)
            break;
        lcm++;
    }
    return lcm;
}

int main(){
    int num1, num2;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    
    
    cout<<"LCM is: "<<lcm(num1,num2);
    
}
// Time complexity is O(a*b), to be more precise O((a*b)-max(a,b))

