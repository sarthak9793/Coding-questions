//                                                  LCM of two numbers (iterative solution --naive solution)
#include<iostream>
using namespace std;

int lcm(int a, int b){
    // We (should) know that the lcm of two number is greater than or equal to the max of two numbers
    int lcm = max(a,b);
    
    if(max(a,b) == 0)//This line is exclusively to deal when either a or b is zero
        return 0;
    
    while(true){
        if(lcm%a == 0 && lcm%b == 0)
            return lcm;
        lcm++;
    }
    return lcm; //control will never reach here, as while(true) is an infinite loop. The function will return from inside the loop itself
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
