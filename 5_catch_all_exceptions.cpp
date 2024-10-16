#include <iostream>

using namespace std;

int main()
{
  double arr[4] = {0.0, 0.0, 0.0, 0.0};
  int index;

  cout << "Enter array index: ";
  cin >> index;

  try
  {
    double numerator;
    double denominator;
    if (index > 3)
    {
      throw 0;
    }

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    if (denominator == 0)
    {
      throw 1;
    }

    arr[index] = numerator / denominator;
    cout << arr[index] << endl;
  }

  catch (...)
  {
    cout << "Something bad happened..." << endl;
  }

  return 0;
}
