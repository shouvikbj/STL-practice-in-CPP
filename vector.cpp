#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;

  cout << "Capacity -> " << v.capacity() << endl;
  cout << "Size -> " << v.size() << endl;

  v.push_back(1);
  cout << "Capacity -> " << v.capacity() << endl;
  cout << "Size -> " << v.size() << endl;

  v.push_back(2);
  cout << "Capacity -> " << v.capacity() << endl;
  cout << "Size -> " << v.size() << endl;

  v.push_back(3);
  cout << "Capacity -> " << v.capacity() << endl;
  cout << "Size -> " << v.size() << endl;

  cout << "Element at 2nd index -> " << v.at(2) << endl;

  cout << "First element -> " << v.front() << endl;
  cout << "Last element -> " << v.back() << endl;

  cout << "before pop.." << endl;
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  v.pop_back();

  cout << "after pop.." << endl;
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  // when we clear a vector..
  // its size becomes zero
  // but its capacity remains same
  cout << "size before clear -> " << v.size() << endl;
  v.clear();
  cout << "size after clear -> " << v.size() << endl;

  // the line below will initialize a vector
  // with size size 5 and all elements being 1

  vector<int> a(5, 1);

  cout << "Printing a" << endl;
  for (int i : a)
  {
    cout << i << " ";
  }
  cout << endl;

  // copying vector
  vector<int> last(a);

  cout << "Printing last" << endl;
  for (int i : last)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}