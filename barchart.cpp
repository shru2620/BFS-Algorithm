//bar chart in row form
#include<iostream>
using namespace std;
void bar(int a[],int n)
{
 int k;
   for(int i=0;i<n;i++)
   {
    k=i;
      for(int j=0;j<a[i];j++)
      {
          cout<<"*";
      }
      cout<<endl;
   }
}
int main()
{
   int n; 
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   bar(a,n);
return 0;
}                                                
