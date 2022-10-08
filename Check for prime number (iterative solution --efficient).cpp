//                                                  Check for prime number (iterative solution --efficient)
/* The idea is that divisors always appear in pairs
    30: (1,30), (2,15), (3,10), (5,6)
    65: (1,65), (5,13)
   So if (x,y) is a pair such that x*y = num
      and if x<=y(x is the smaller element)
            then    x*x <= num
                    x <= sqrt(num)
   Eureka Moment: 1 <---------> sqrt(num) is the range of smaller divisors in the pairs
*/

// So if y is a divisor of num, we would have already encountered it's smaller corresponding pair x, in the range 1 <---------> sqrt(num)
// So in programs where we have to check the existence of factors and not concerned with the exact factors itself we can just check in the range of the 
// smaller pair element i.e. 1 <-----------> sqrt(num)
#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int num){
    if(num==0 || num==1)//To deal with 0 and 1, both of which are not prime
        return false;
    for(int i = 2; i<=sqrt(num) ; ++i)
        if(num%i==0)
            return false;
    return true;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<"Is the number prime?: "<<checkPrime(num);
}

// Time complexity = O(sqrt(n))

