//                                              trailing Zeros in a factorial(naive method)
// In this method we first calculate the factorial and then calculate the number of trailing zeros.
// The major problem with this solution is that it is going to cause overflow for even slightly higher values of n
// with long int, program is working till 20!
#include<iostream>
using namespace std;

long int
factorial (int num)
{
  long int fact = 1;
  if (num <= 1)
    return 1;
  for (int i = 2; i <= num; i++)
    {
      fact *= i;
    } //time complexity is 0(n)
  return fact;
}

int
trailingZeros (int num)
{
  long int fact = factorial (num);
  int count = 0;
  while (fact != 0)
    {
      if (fact % 10 != 0)
	return count;
      if (fact % 10 == 0)
	count++;
      fact = fact / 10;
    } //time complexity is less than 0(n)
  return count;
}

int main ()
{
  int num;
  cout << "Enter number: ";
  cin >> num;

  cout << "Number of trailing zeros in a factorial are: " <<
    trailingZeros (num);
}
// Overall time complexity is 0(n)


