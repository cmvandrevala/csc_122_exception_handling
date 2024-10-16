#include <iostream>
#include <exception>

using namespace std;

class mysupercoolexception : public exception
{
  virtual const char *what() const throw()
  {
    return "An exception happened... and that's super cool, I guess?";
  }
} msce;

int main()
{
  try
  {
    int some_number;

    cout << "Enter some number: ";
    cin >> some_number;

    if (some_number > 3)
    {
      throw msce;
    }
    else
    {
      cout << "Yeah, that's a number, all right..." << endl;
    }
  }

  catch (exception &e)
  {
    cout << e.what() << endl;
  }
  return 0;
}
