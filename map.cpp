#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<int, string> m; // this is a key->value pair

  m[1] = "Shouvik";
  m[2] = "Bajpayee";
  m.insert({5, "bheem"});

  cout << "before erase.." << endl;
  for (auto i : m)
  {
    cout << i.first << " : " << i.second << endl;
  }

  cout << "finding 13 -> " << m.count(13) << endl;
  cout << "finding 5 -> " << m.count(5) << endl;

  cout << "after erase.." << endl;
  m.erase(2);
  for (auto i : m)
  {
    cout << i.first << " : " << i.second << endl;
  }

  auto it = m.find(5);
  for (auto i = it; i != m.end(); i++)
  {
    cout << (*i).first << " : " << (*i).second << endl;
  }

  return 0;
}