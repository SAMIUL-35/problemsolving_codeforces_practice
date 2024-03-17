//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
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
  int length=1e18;

  while (r<n)
  {
    sum+=a[r];

    while (sum - a[l] >= m) {
            sum -= a[l];
            l++;
        }

        if (sum >= m) { 
                    int currentLength = r - l + 1;
            length = min(length, currentLength);
        }

        r++;
    }

    if (length == 1e18) 
       cout<<-1<<endl;
    else
        cout<<length<<endl;


    return 0;
}