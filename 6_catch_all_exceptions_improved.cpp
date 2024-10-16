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
      throw "Error: Array out of bounds!";
    }

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    if (denominator == 0)
    {
      throw 0;
    }

    arr[index] = numerator / denominator;
    cout << arr[index] << endl;
  }

  catch (const char *msg)
  {
    cout << msg << endl;
  }

  catch (int num)
  {
    cout << "Error: Cannot divide by " << num << endl;
  }

  catch (...)
  {
    cout << "Unexpected exception!" << endl;
  }

  return 0;
}
