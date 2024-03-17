#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
 while (t--)
 {
     int n;
  cin>>n;
  string s;
  cin>>s;
  int cnt=0;
  int cnt1=0;
  for (int i = 0; i < n; i++)
  {
    if(s[i]=='W') cnt++;
    else break;
  }
  for (int i = n-1; i >=0; i--)
  {
    if(s[i]=='W') cnt1++;
    else break;
  }
  cout<<s.size()-cnt-cnt1<<endl;
 }
 




    return 0;
}