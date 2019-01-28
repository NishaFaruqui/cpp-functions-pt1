//Faruqui, Nishat
//Week 8 Functions HW Program #3

#include <iostream>
#include <string>
using namespace std;

double factorial(double n)
{
  double product = 1;
  for (double i = n; i >=1; i--)
    product *= i;
  return product;
}

int main()
{
double num;
double result;
cout << "Enter a number: ";
cin >> num;

result = factorial(num);
cout << num << "! = " << result << endl;
  return 0;
}
