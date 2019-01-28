//Faruqui, Nishat
//Week 8 Functions HW Program #2

#include <iostream>
#include <string>
using namespace std;

void increment(int &a, int &b, int &result)
{
  result = a + b;

}

int main()
{
int number;
int increase;
int sum;
cout << "Enter a number: ";
cin >> number;
cout << "Enter a value to increment by: ";
cin >> increase;
increment(number, increase, sum);
cout << "The incremented value is " << sum << "." << endl;

  return 0;
}
