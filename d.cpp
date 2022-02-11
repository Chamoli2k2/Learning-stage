#include<iostream>
using namespace std;
void
check (int n)
{
  int a[10], sum1 = 0, sum2 = 0;
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  for (int j = 0; j < n; j++)
    {
      for (int x = 1; a[j] != 0; x++)
	{
	  if (x % 2 == 0)
	    {
	      sum1 = sum1 + a[j] % 10;
	    }
	  else
	    {
	      sum2 = sum2 + a[j] % 10;
	    }
	}
    }
  if (sum1 % 4 == 0 || sum2 % 3 == 0)
    {
      cout << "Yes" << endl;
    }
  else
    {
      cout << "No" << endl;
    }
}

int
main ()
{
  int p;
  cin >> p;
  check (p);
  return 0;
}
