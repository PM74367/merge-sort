#include<iostream>
using namespace std;
int count=0;
void merge(int *ar,int start,int end,int mid)
{
	int ar1[mid-start+1],ar2[end-mid];
	for(int i=start,j=0;i<=mid;i++,j++)
	ar1[j]=ar[i];
	for(int i=mid+1,j=0;i<=end;i++,j++)
	ar2[j]=ar[i];
	int i=start,j=mid,k=mid+1,l=end,x=0,y=0;
	while((x<(j-i+1))&&y<=(l-k))
	{
		if(ar1[x]<ar2[y])
		{
			ar[start]=ar1[x];
			x++;
		}
		else
		{
			ar[start]=ar2[y];
			y++;
		}
		count++;
		start++;
	}
	while(x<(j-i+1))
	{
		ar[start]=ar1[x];
		start++;
		count++;
		x++;
	}
	while(y<=(l-k))
	{
		ar[start]=ar2[y];
		start++;
		count++;
		y++;
	}
}
void sort(int *ar,int start,int end)
{
	if(start>=end)
	return ;
	int mid=(start+end)/2;
	sort(ar,start,mid);
	sort(ar,mid+1,end);
	merge(ar,start,end,mid);
}
int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,0,n-1);
	for(int i=0;i<n;i++)
	cout<<ar[i]<<"\t";
	cout<<endl;
	cout<<"No. of swaps is :"<<count;
	return 0;
}
