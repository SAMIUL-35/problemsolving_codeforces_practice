#include<stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int q;
  cin>>q;

  while (q--)
  {
    
    char a[3][3];
   int f[3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            int val= a[i][j]-'A';
           f[val]++;
        }
    } 
    

    for (int k = 0; k < 3; k++)
{
    if(f[k]<3)
    {
        char x='A'+k;
        cout<<x<<endl;
    }
}


  }
  


    return 0;
}