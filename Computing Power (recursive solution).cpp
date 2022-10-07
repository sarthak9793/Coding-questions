//                                                          Computing Power (recursive solution)

/*This solution is based on the fact that base^power = base^(power/2) * base^(power/2) [if power is even]
                                      and base^power = base^(power-1) * base [if power is odd]
    for ex - 2^6 = 2^3 * 2^3 
    for ex - 2^7 = 2^6 * 2 
*/
/* In this solution we are basically calculating x = base^(power/2) recursively and then using that to find answer
   If power = even then answer is x^2
   If power = odd then answer is (x^2) * base
*/

#include<iostream>
using namespace std;

// This is the solution I Initially thougt of.
// int powerFunction(int base, int power){
//     if(power==0) //this is to deal with cases when power = 0
//         return 1;
//     if(power%2==0)
//         return powerFunction(base, power/2) * powerFunction(base, power/2);
//     else
//         return powerFunction(base, power-1) * base;
    
// }
int powerFunction(int base, int power){
    if(power==0) 
        return 1;
    int x = powerFunction(base, power/2);
    if(power%2==0) 
        return x*x;
    else //when power is odd, x*x = base^(power-1)
        return x*x*base;
    
}

int main(){
    int base, power;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter power: ";
    cin>>power;
    
    cout<<powerFunction(base,power);
}

/*                                                      Time complexity of the old solution
   I have calculated this Time complexity so im not sure if its correct.
   Calculating time complexity here is typical because we have two recursion within if-else conditions. But to find Big O, we will consider the worst case
   I cant judge which is the worst case, so we will solve both recurrence relation and choose the worse one.
   Also another complexity is that there are two different inputs in recursive function, so to simplify things we will only concern ourselves with the value thats 
   changing i.e. power
   
   T(n) = 2T(n/2) + c(because constant work is done in each level)
   {when solving through recursion tree we have to take n, n/2 , n/4 ........ to 1 cuz thats the base condition}
   upon solving we get T(n) = O(logn)
   
   T(n) = T(n-1) + c
   {when solving through recursion tree we have to take n, n-1, n-2, n-3 ........ to 1 cuz thats the base condition}
   upon solving we get T(n) = O(n-1) = O(n)
   
   We chose the worst one so overall time complexity = O(n)
*/

// Time complexity of the new solution is O(logn)
/* Obviously since this is a recursive function so its going to have recursive function calls and these recursive function calls are going to take space in the 
   function call stack. We will need O(log n) auxillary space.
   Also it will have overhead for recursion
*/
   

