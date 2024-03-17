#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n,m;
  cin>>n>>m;
  vector<int> b(n);
  for (int i = 0; i < n; i++)
  {
    cin>>b[i];
  }
  sort(b.begin(),b.end());
  int sum=0;
  for (int i = 0; i < m; i++)
  {
    if(b[i]<0)
    {
        sum+=abs(b[i]);
    }
  }
  
cout<<sum<<endl;

    return 0;
}