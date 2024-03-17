// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n;
  long long m;
  cin>>n>>m;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  int l=0,r=0;
  long long sum=0;
  int length=0;

  while (r<n)
  {
    sum+=a[r];

    while(sum>m)
    {
        sum-=a[l];
        l++;
    }
   
   int cu_length=r-l+1;
 length=max(length,cu_length);
  r++;
  }
  
cout<<length<<endl;

    return 0;
}