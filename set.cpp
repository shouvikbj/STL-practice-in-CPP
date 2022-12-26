#include <iostream>
#include <set> // uses Binary Search Tree (BST)

using namespace std;

int main()
{
  set<int> s; // duplicate elements not allowed

  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(6);
  s.insert(6);
  s.insert(0);

  for (auto i : s)
  {
    cout << i << endl;
  }
  cout << endl;

  set<int>::iterator itr = s.begin();
  itr++; // moving the iterator to second element of the set

  s.erase(itr);
  for (auto i : s)
  {
    cout << i << endl;
  }
  cout << endl;

  cout << "5 is present or not -> " << s.count(5) << endl;
  cout << "-5 is present or not -> " << s.count(-5) << endl;

  set<int>::iterator itr1 = s.find(5);
  cout << "Value present at itr -> " << *itr1 << endl;

  for (auto it = itr1; it != s.end(); it++)
  {
    cout << *it << endl;
  }

  return 0;
}