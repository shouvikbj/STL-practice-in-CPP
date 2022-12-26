#include <iostream>
#include <queue>

using namespace std;

int main()
{
  priority_queue<int> maxi; // built using max_heap

  priority_queue<int, vector<int>, greater<int>> mini; // built using min_heap

  maxi.push(1);
  maxi.push(3);
  maxi.push(2);
  maxi.push(0);

  int n = maxi.size();

  for (int i = 0; i < n; i++)
  {
    cout << maxi.top() << " ";
    maxi.pop();
  }
  cout << endl;

  mini.push(1);
  mini.push(3);
  mini.push(2);
  mini.push(0);

  int n1 = mini.size();

  for (int i = 0; i < n1; i++)
  {
    cout << mini.top() << " ";
    mini.pop();
  }
  cout << endl;

  cout << "maxi empty or not -> " << maxi.empty() << endl;
  cout << "mini empty or not -> " << mini.empty() << endl;

  return 0;
}