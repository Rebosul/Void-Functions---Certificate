#include <iostream>
using namespace std;
int n, v[100];
void citeste() {
        cin>>n;
        for (int i=1;i<=n;i++)
              cin>>v[i];
}
void rezolva() {
        for (int i=1, j=n;i<j;i++,j--) {
               int aux = v[i];
               v[i] = v[j];
               v[j] = aux;
        }
}
void afiseaza() {
        for (int i=1;i<=n;i++)
               cout<<v[i]<<" ";
        cout<<"\n";
}
int main () {
     citeste();
     rezolva();
     afiseaza();
     return 0;
}
