#include<iostream>
using namespace std;
int main()
{
  int b,i;
  char a[10000];
  cin>>b;
  cin>>a;
  for(i=b-1;i>=0;i--)
  {
    if ((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
    {
       continue;
    }
    else
    {
      cout<<a[i];
    }
  }
  return 0;
}
