#include <iostream>
#include <list> // built using Doubly LinkedList

using namespace std;

int main()
{
  list<int> l;

  l.push_back(1);
  l.push_front(2);

  for (int i : l)
  {
    cout << i << " -> ";
  }
  cout << endl;

  // l.pop_back();
  // l.pop_front();

  // for (int i : l)
  // {
  //   cout << i << " -> ";
  // }
  // cout << endl;

  cout << "Front -> " << l.front() << endl;
  cout << "Back -> " << l.back() << endl;

  cout << "Empty or not -> " << l.empty() << endl;

  cout << "before erase -> " << l.size() << endl;
  l.erase(l.begin());
  cout << "after erase -> " << l.size() << endl;

  for (int i : l)
  {
    cout << i << " -> ";
  }
  cout << endl;

  // copying one list to another
  list<int> n(l);
  for (int i : n)
  {
    cout << i << " -> ";
  }
  cout << endl;

  // creating a list with values
  list<int> n2(5, 100); // list will be created with 5 elements all being 100
  for (int i : n2)
  {
    cout << i << " -> ";
  }
  cout << endl;

  return 0;
}