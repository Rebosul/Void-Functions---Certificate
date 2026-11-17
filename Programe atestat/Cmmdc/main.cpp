#include <iostream>
using namespace std;
int cmmdc(int a , int b){
     cout << "La inceputul functiei cmmdc, a = " << a << " si b = " << b << endl;
     while(b != 0)
     {
            int r = a % b;
            a = b;
            b = r;
       } cout << "La finalul functiei cmmdc, a = " << a << " si b = " << b << endl; return a;
}

int main(){
     int x,y;
     cin>>x>>y;
     cout << cmmdc(x , y) << endl;
     cout << "Dupa apelul functiei cmmdc, x = " << x << " si y = " << y << endl;
     return 0;
}

