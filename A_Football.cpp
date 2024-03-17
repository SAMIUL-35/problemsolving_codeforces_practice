#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n;
  cin>>n;
  map<string,int> f;
  while (n--)
  {
    string s;
    cin>>s;
    f[s]++;
  }
  int win=INT_MIN;
  string k="";
  for(auto j:f)
  {
    int d=j.second;
    string team=j.first;
    if(d>win) 
    {
        win=d;
        k=team;
    }
    
  }
cout<<k<<endl;

    return 0;
}