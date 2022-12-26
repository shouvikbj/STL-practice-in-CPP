#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> v;

  v.push_back(1);
  v.push_back(4);
  v.push_back(5);
  v.push_back(7);
  v.push_back(9);
  v.push_back(10);

  cout << "Finding 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;
  cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;

  cout << "Lower bound of 7 -> " << lower_bound(v.begin(), v.end(), 7) - v.begin() << endl;
  cout << "Upper bound of 7 -> " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;

  int a = 3;
  int b = 5;

  cout << "Max -> " << max(a, b) << endl;
  cout << "Min -> " << min(a, b) << endl;

  swap(a, b);

  cout << a << "," << b << endl;

  string abcd = "abcd";
  reverse(abcd.begin(), abcd.end());
  cout << abcd << endl;

  rotate(v.begin(), v.begin() + 1, v.end());
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  sort(v.begin(), v.end());
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}