#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);

int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}

int findLongestConseqSubseq(int arr[], int N)
{
  sort(arr, arr + N);

  int count = 0;
  int result = 0;
 
  if(N == 1){
      return 1;
  }
  for(int i=0; i<N-1; i++){
      if(arr[i] + 1 == arr[i+1]){
          count++;
      }else if(arr[i] == arr[i+1]){
          continue;
      }else{
          count = 0;
      }
      
      if(count+1 > result){
          result = count+1;
      }
  }
  return result;
}