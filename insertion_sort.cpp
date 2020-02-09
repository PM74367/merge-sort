#include<iostream>
using namespace std;
void insertion_sort(int *ar,int n)
{
  for(int i=1;i<n;i++)
  {
    int selected=ar[i];
    int j=i-1;
    while(j>=0&&ar[j]>selected)
    {
      ar[j+1]=ar[j];
      j--;
    }
    ar[j+1]=selected;
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
    insertion_sort(ar,n);
    cout<<"Final sorted array is:\n";
    for(int i=0;i<n;i++)
      cout<<ar[i]<<"\t";
    delete ar;
    return 0;
}
