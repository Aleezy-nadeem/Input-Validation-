#include <iostream>
#include <exception>
#include <cctype>
#include <stdexcept>

using namespace std;

int main ()
{
  int n;
  cout << "Enter an integer: ";
  while (cin >> n) // loop until end of file or error
  {
    try
    {
      if (cin.fail ()) // check if input stream failed
      {
        throw logic_error("Invalid input"); // throw an exception
      }
      else
      {
        cout << "You entered: " << n << endl; // print the input
      }
    }
    catch (logic_error &e) // catch the exception
    {
      cout << "Error: " << e.what() << endl; // print the error message
      cin.clear (); // clear the error state of the stream
      cin.ignore (1000, '\n'); // ignore the remaining characters in the buffer
    }
    cout << "Enter another integer or press Ctrl+D to end: "; // prompt for next input
  }
  return 0;
}

