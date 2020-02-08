#include<stdio.h>
#include<stdlib.h>
void heap(int *ar,int st,int end)
{
//implement heap function
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
  heap(ar,0,n);
  for(i=n-1,i>0;i--)
  {
    int temp=ar[i];
    ar[i]=ar[0];
    ar[0]=temp;
    heap(ar,0,i);
  }
  free(ar);
  return 0;
}
