//Faruqui, Nishat
//Week 8 Functions HW Program #1

#include <iostream>
#include <string>
using namespace std;

void factors(int n) {
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    cout << i << " ";
  }
}
int main()
{
int number;
cout << "Enter a number: ";
cin >> number;
cout << "Factors: ";

factors(number);

cout << endl;
  return 0;
}
