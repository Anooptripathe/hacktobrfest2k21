#include<bits/stdc++.h>
using namespace std;
void closedifference(int arr1[],int arr2[],int m,int n,int x)
{
	int diff=INT_MAX;
	int res1=0,res2=0;
	int l=0,k=n-1;
	while(l<m && k>=0)
	{
	if(abs(arr1[l]+arr2[k]-x)<diff)
	{
		res1=l;
		res2=k;
		diff=abs(arr1[l]+arr2[k]-x);
	}
if((arr1[l]+arr2[k])>x)
	k--;
else
	l++;
}
cout<<arr1[res1]<<" "<<arr2[res2]<<endl;
}
int main()
{
	int arr1[]={1,4,5,7};
	int arr2[]={10,20,30,40};
	int x=38;
	int m=sizeof(arr1)/sizeof(arr1[0]);
	int n=sizeof(arr2)/sizeof(arr2[0]);
	closedifference(arr1,arr2,m,n,x);
	return 0;
}
