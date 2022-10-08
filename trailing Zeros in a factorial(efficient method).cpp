//                                                  trailing Zeros in a factorial(efficient method)
/* A trailing zero is always produced by prime factors 2 and 5. If we can count the number of 5s and 2s, our task is done
     n = 5: There is one 5 and 3 2s in prime factors of 5! (2 * 2 * 2 * 3 * 5). So a count of trailing 0s is 1.
     n = 11: There are two 5s and eight 2s in prime factors of 11! (2 8 * 34 * 52 * 7). So the count of trailing 0s is 2.
   We can easily observe that the number of 2s in prime factors is always more than or equal to the number of 5s. So if we count 5s in prime factors, we are done.
   
   How to count the total number of 5s in prime factors of n!? A simple way is to calculate floor(n/5). For example, 7! has one 5, 10! has two 5s. It is not done yet, 
   there is one more thing to consider. Numbers like 25, 125, etc have more than one 5. For example, if we consider 28! we get one extra 5 and the 
   number of 0s becomes 6. Handling this is simple, first, divide n by 5 and remove all single 5s, then divide by 25 to remove extra 5s, and so on. 
                Trailing 0s in n! = floor(n/5) + floor(n/25) + floor(n/125) + .... as long as num >= denominator(i.e. power of 5's)
*/
// TBH I don't get it, but it's simple enough to remember
#include<iostream>
using namespace std;

int trailingZeros(int num){
    int count=0;
    for(int i=5 ; num/i != 0 ; i=i*5){
        count+=num/i;
    }
    return count;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<"Number of trailing zeros in a factorial are: "<<trailingZeros(num);
}
// time complexity is O(logn)


