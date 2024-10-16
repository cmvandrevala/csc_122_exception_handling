#include <iostream>

using namespace std;

int main()
{
  int values[3] = {1, 2, 3};
  int index;

  cout << "Enter the index: ";
  cin >> index;

  cout << "The values at index " << index << " = " << values[index] << endl;

  return 0;
}
