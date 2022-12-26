#include <iostream>
#include <queue>

using namespace std;

int main()
{
  queue<int> q;

  q.push(10);
  q.push(20);
  q.push(30);
  cout << "front element -> " << q.front() << endl;
  cout << "end element -> " << q.back() << endl;
  cout << "size -> " << q.size() << endl;

  q.pop();
  cout << "front element -> " << q.front() << endl;
  cout << "end element -> " << q.back() << endl;
  cout << "size -> " << q.size() << endl;

  cout << "empty or not -> " << q.empty() << endl;

  return 0;

  return 0;
}