
#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int q;
  cin>>q;

  while (q--)
  {
   int n;
   cin>>n;
  string s;
  cin>>s;
  long long cnt=0;
  long long cnt2=0;
  for (int i = 0; i < s.size(); i++)
  {
    if(s[i]=='+')
    {cnt++;}
  else if(s[i]=='-'){ cnt2++;}
  }
//   cout<<cnt<<" "<<cnt2<<endl;
cout<<abs(cnt-cnt2)<<endl;
  }

    return 0;
}