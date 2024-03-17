#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int q;
  cin>>q;
  while (q--)
  {
    
    int a,b,c;
    cin>>a>>b>>c;
    // cout<<a<<" "<<b<<" "<<c<<endl;
if(a==b ) cout<<c<<endl;
else if(a==c) cout<<b<<endl;
else if(b==c) cout<<a<<endl;

  }
  


    return 0;
}