#include <bits/stdc++.h>
using namespace std;

int main()
 {
	int a[]={2,4,5,3,2,1,8,5,7};
	int flag=1;
	int i,j,x,k;
	cout<<"Input number and key";
	cin>>x;
	cin>>k;
	for(j=0;j<9;j=j+k)
	{ if (flag==1)
	{
	    for(i=j;i<j+k;i++)
	    {
	    if(a[i]==x)
		{
			flag=1;
			break;
		}
	}
}
	}
if(flag==0)
cout<<"No";
else
cout<<"Yes";
}