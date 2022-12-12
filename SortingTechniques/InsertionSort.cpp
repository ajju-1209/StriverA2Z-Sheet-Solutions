#include <bits/stdc++.h>
using namespace sd;

int main()
{
  vector<int> v = {5, 4, 3, 2, 1};
  int n = v.size();
  for (int i = 1; i < n; i++)
  {
    int key = v[i];
    int j = i - 1;

    /* Move elements of arr[0..i-1], that are
      greater than key, to one position ahead
      of their current position */
    while (j >= 0 && key < a[j])
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }

  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << "\n";
}