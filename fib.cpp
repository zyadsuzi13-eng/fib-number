#include <iostream>
using namespace std;
void fib(int n)
{
  long long a = 0;
  long long b = 1;
  long long c = 0;
  if (n == 1)
  {
    cout << a;
    return;
  }
  if (n <= 0)
  {
    cout << "error";
    return;
  }
  cout << '[';
  cout << a << "," << b << ",";
  for (int i = 2; i <= n; i++)
  {
    c = a + b;
    a = b;
    b = c;
    if (i == n)
      cout << c;
    else
      cout << c << ",";
  }
  cout << ']';
}
int main()
{
  cout << "enter the number :";
  int n;
  cin >> n;
  fib(n);
}