#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int n,i;
  printf("Enter the size of character array:");
  scanf("%d",&n);
  char *ar=(char *)malloc(sizeof(char)*n);
  int *ch_count=(int *)malloc(sizeof(int)*26);
  char *res=(char *)malloc(sizeof(char)*n);
  memset(ch_count,0,sizeof(ch_count));
  printf("Enter elements in character array(Only small case letters(a-z))");
  for(i=0;i<n;i++)
  {
    scanf("%c",&ar[i]);
  }
  for(i=0;i<n;i++)
  {
    ch_count[ar[i]-'a']++;
  }
  for(i=1;i<26;i++)
  {
    ch_count[i]+=ch_count[i-1];
  }
  for(i=0;i<n;i++)
  {
    res[ch_count[ar[i]-'a']-1]=ar[i];
  }
  for(i=0;i<n;i++)
  {
    ar[i]=res[i];
  }
  printf("Sorted array is\n");
  for(i=0;i<n;i++)
  {
    printf("%c\t",ar[i]);
  }
  free(ar);
  free(ch_count);
  free(res);
  return 0;
}
