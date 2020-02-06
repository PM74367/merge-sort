#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,n;
  printf("Enter the no. of elements:");
  scanf("%d",&n);
  int *ar=(int *)malloc(sizeof(int)*n);
  printf("Enter elements in array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(ar[i]>ar[j])
      {
        ar[i]=ar[i]^ar[j];
        ar[j]=ar[i]^ar[j];
        ar[i]=ar[i]^ar[j];
      }
    }
  }
  printf("Array after sorting is\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",ar[i]);
  }
  return 0;
}
