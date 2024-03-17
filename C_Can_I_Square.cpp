#include<stdio.h>
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
    int s[n];
    long long int total=0;
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
        total+=s[i];
    }
    long long int squre=sqrt(total);
    if (squre * squre == total)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
   
    

  }
  


    return 0;
}