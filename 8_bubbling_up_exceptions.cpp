#include <iostream>
#include <stdexcept>

using namespace std;

int add(int a, int b)
{
  if (a > 5 || b < 0)
  {
    throw std::invalid_argument("I have set completely arbitrary constraints for this function! Fear me!");
  }

  return (a + b);
}

int main()
{
  try
  {
    int a;
    int b;

    cout << "Enter value one: ";
    cin >> a;

    cout << "Enter value two: ";
    cin >> b;

    cout << add(a, b) << endl;
  }

  catch (std::invalid_argument &e)
  {
    cerr << e.what() << endl;
    return -1;
  }

  return 0;
}
