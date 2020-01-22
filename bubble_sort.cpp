#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the size of array;";
   cin>>n;
   int *ar=new int[n];
   cout<<"Enter elements in array:\n";
   for(int i=0;i<n;i++)
     cin>>ar[i];
   for(int i=0;i<n-1;i++)
   {
      for(int j=0;j<n-i-1;j++)
      {
        if(ar[j]>ar[j+1])
        {
          int temp=ar[j];
          ar[j]=ar[j+1];
          ar[j+1]=temp;
         }
      }
    }
    cout<<"Final sorted array is:\n";
    for(int i=0;i<n;i++)
      cout<<ar[i]<<"\t";
    delete ar;
    return 0;
}
