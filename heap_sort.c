#include<stdio.h>
#include<stdlib.h>
void heap(int *ar,int st,int end)
{
  int elem=st;
  int ch1=2*st+1;
  int ch2=2*st+2;
  if(ch1<end&&ar[elem]<ar[ch1])
  {
    elem=ch1;
  }
  if(ch2<end&&ar[elem]<ar[ch2])
  {
    elem=ch2;
  }
  if(elem!=st)
  {
    ar[elem]=ar[elem]^ar[st];
    ar[st]=ar[elem]^ar[st];
    ar[elem]=ar[elem]^ar[st];
    heap(ar,elem,end);
  }
}
int main()
{
  int i,n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  int *ar=(int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
  for(i=n/2;i>=0;i--)
    heap(ar,i,n);
  for(i=n-1;i>0;i--)
  {
    int temp=ar[i];
    ar[i]=ar[0];
    ar[0]=temp;
    heap(ar,0,i);
  }
  printf("Array after sorting is\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",ar[i]);
  }
  free(ar);
  return 0;
}
