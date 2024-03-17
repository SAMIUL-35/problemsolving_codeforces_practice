
#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int q;
  cin>>q;

  while (q--)
  {
    int a,b;
    cin>>a>>b;
    // cout<<a<<" "<<b<<endl;
     if ((a + b) % 2 == 1)  {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }

  }
  


    return 0;
}