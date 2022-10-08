//                              Print prime factors ( --efficient solution)
// We know that a number can be written as product of its prime factors.
// We should also know that: "The smallest factor(other than 1) of a number is always a prime number"
/* Lets take num = 252. We will start our loop from i=2, if (num%2 == 0), then we will keep dividing number by 2(and printing it) until num%2 != 0
   Now prime number 2 has been eliminated from the number. Next i = 3, if (num%3==0), then we will keep dividing number by 3(and printing it) until num%3 != 0
   Now 3 has been elimiated from the number. Next i = 4, Since 2 has been eliminated from the number we will continue on to the next iterations.
   Similarly i = 5,6 will also be skipped. Now i = 7, if(num%7 == 0), then we will keep dividing number by 7(and printing it) until num%7 != 0
   .
   .
   .
   The i iterations will stop when i<=num
*/
// The fact that "The smallest factor(other than 1) of a number is always a prime number" ensures that we are only printing prime numbers and not composite numbers



#include<iostream>
using namespace std;

void printPrimeFactors(int num){
    for(int i=2 ; i<=num ; i++){
        if(num%i==0){
            while(num%i==0){
                cout<<i<<endl;
                num=num/i;
            }
                
        }
            
    }
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    printPrimeFactors(num);
    
}

//Time complexity:If num is prime then worst case will occur. We will not go into the inner loop and it will run all the iterations of the outer loop i.e. outer loop will run O(n) times.
//                When num is composite, we will go inside the inner loop, which will drastically reduce the value of num. So the loop is going to run less times



