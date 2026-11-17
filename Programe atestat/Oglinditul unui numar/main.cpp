#include <iostream>
using namespace std;
void ogl(int n)
{
     int r = 0;
     while(n)
      r = 10 * r + n % 10, n /= 10;
      cout<< r;
}
int main(){
     int a;
     cin >> a;
     ogl(a);
     return 0;
}
