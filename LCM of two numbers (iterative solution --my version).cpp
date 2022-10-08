//                                                  LCM of two numbers (iterative solution --naive solution --my version)
//Very complicated to understand if you forget it.
//The idea of this solution is that at max lcm = a*b, so in outer loop we iterate thorugh 1<--->b and for each of these iteration we iterate through 1<----->a 
// For ex - a=3, b=5, in outer loop we iterate from i = 1 to i = 5 and within each iteration we again iterate through j = 1 to j = 3 and check if a*i == b*j
/*    i = 1, 
            we check 3*1 == 5*1
            we check 3*1 == 5*2
            we check 3*1 == 5*3
      now i = 2        
            we check 3*2 == 5*1
            we check 3*2 == 5*2
            we check 3*2 == 5*3
      now i = 3
            we check 3*3 == 5*1
            we check 3*3 == 5*2
            we check 3*3 == 5*3
      now i = 4
            we check 4*3 == 5*1
            we check 4*3 == 5*2
            we check 4*3 == 5*3
      now i = 5
            we check 5*3 == 5*1
            we check 5*3 == 5*2
            we check 5*3 == 5*3 (return)
*/
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

// Time complexity = O(a*b)

