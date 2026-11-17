#include <iostream>
using namespace std;
void dublare(int &n)
{
        n = 2 * n;
}
int main()
{
      int x;
      cin>>x;
      cout << "x = " << x << endl;
      dublare(x);
      cout << "x = " << x << endl;
      return 0;
}

