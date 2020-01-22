#include<iostream>
using namespace std;
int sort_pivot(int *arr,int start,int end)
{
  int pivot=arr[end];
  int i=start;
  for(int j=start;j<end;j++)
  {
    if(arr[j]<pivot)
    {
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      i++;
    }
  }
  int temp=arr[end];
  arr[end]=arr[i];
  arr[i]=temp;
  return i;
}
void quick_sort(int *arr,int start,int end)
{
  if(start<end)
  {
    int pivot=sort_pivot(arr,start,end);
    quick_sort(arr,start,pivot-1);
    quick_sort(arr,pivot+1,end);
  }
}
int main()
{
   int n;
   cout<<"Enter the size of array;";
   cin>>n;
   int *ar=new int[n];
   cout<<"Enter elements in array:\n";
   for(int i=0;i<n;i++)
     cin>>ar[i];
    quick_sort(ar,0,n-1);
    cout<<"Final sorted array is:\n";
    for(int i=0;i<n;i++)
      cout<<ar[i]<<"\t";
    delete ar;
    return 0;
}
