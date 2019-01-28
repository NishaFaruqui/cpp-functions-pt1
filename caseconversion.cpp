//Faruqui, Nishat
//Week 8 Functions HW Program #4

#include <iostream>
#include <string>
using namespace std;

void convert(char &c)
{
  int i = static_cast<int>(c);
  if (i >= 97)
  i = i - 32;
  else
  i = i + 32;

  c = static_cast<char>(i);
}

int main()
{
  char letter;
  cout << "Enter a letter: ";
  cin >> letter;

  convert(letter);
cout << "Case converted: " << letter << endl;
  return 0;
}
