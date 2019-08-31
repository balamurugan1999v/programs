#include<iostream>
using namespace std;
int main()
{
  int b=0,c=0,i,n,j;
  cin>>n;
  char a[n][n];
  for(i=0;i<n;i++)
  cin>>a[i];
  if(n==1)
  {
  	if(a[0][0]=='.')
  	b++;
  	else if(a[0][0]=='#')
  	c++;
  }
  for(i=0;i<n-1;i++)
  {
  	if (a[i][0]=='.')
  	{
  		b++;
  	}
  	if(a[i][0]=='#')
  	c++;
  	if(a[0][i+1]=='#')
  	c++;
  	if(a[0][i+1]=='.')
  	b++;
  }
  for(i=n-1;i>0;i--)
  {
  	if (a[i][n-1]=='.')
  	{
  		b++;
  	}
  	else if(a[i][n-1]=='#')
  	c++;
  	if(a[n-1][i-1]=='#')
  	c++;
  	else if(a[n-1][i-1]=='.')
  	b++;
  }
  cout<<b<<" "<<c;
  
  return 0;
}
