#include <iostream>
using namespace std;

int main ()
{
  //create 
  int arr[] {3, 4, 2, 3, 5};
  int sum = 0;
  //find min
  for (int a = 0; a < 5; a++)
    {
      int min = arr[a];
      if (arr[a] < min)
	{
	  min = arr[a];
	}
    }
  //find max
  for (int a = 0; a < 5; a++)
    {
      int max = arr[a];
      if (arr[a] > max)
	{
	  max = arr[a];
	}
    }
  //create array
  for (int a = 0; a < 5; a++)
     {
     if (arr[a]==min)
     {
     while (arr[a] <= max)
     {
     sum++;
     }
     }
     }
  cout << endl;
  cout << "min = " << min << endl;
  cout << "max = " << max << endl;
  cout << "sum = " << sum << endl;
  return (0);
}
