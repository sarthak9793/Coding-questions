  //                                                  LCM of two numbers (iterative solution --naive solution --my version)
#include<iostream>
using namespace std;

int lcm(int a, int b){
    
    if(min(a,b) == 0)//This line is exclusively to deal when either a or b is zero
        return 0;
    
    for(int i = 1 ; i<=b ; ++i)
        for(int j = 1 ; j<=a ; ++j){
            if((a*i) == (b*j))
                return a*i;
        }
    return -1;//I had to put some return here, cuz i was getting an error otherwise
}

int main(){
    int num1, num2;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    
    
    cout<<"LCM is: "<<lcm(num1,num2);
    
}
