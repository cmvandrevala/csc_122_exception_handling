#include <iostream>

using namespace std;

int main()
{

  double numerator, denominator;

  cout << "Enter numerator: ";
  cin >> numerator;

  cout << "Enter denominator: ";
  cin >> denominator;

  try
  {
    if (denominator == 0)
    {
      throw 0;
    }

    cout << numerator << " / " << denominator << " = " << numerator / denominator << endl;
  }

  catch (int num_exception)
  {
    cout << "Error: Cannot divide by " << num_exception << endl;
  }

  return 0;
}
