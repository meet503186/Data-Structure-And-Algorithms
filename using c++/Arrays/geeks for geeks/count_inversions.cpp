#include <bits/stdc++.h>
using namespace std;

long long int merge(long long arr[], long long temp[], long long left, long long mid, long long right){
    long long i = left;
    long long j = mid;
    long long k = left;
    long long int count = 0;
    
    while((i<=mid-1) && (j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            count = count + (mid - i);
        }
        
    }
    
    while(i<=mid-1){
        temp[k++] = arr[i++];
    }
    
    while(j<=right){
        temp[k++] = arr[j++];
    }
    
    for(i=left; i<=right; i++){
        arr[i] = temp[i];
    }
    return count;
}

long long int _mergeSort(long long arr[], long long temp[], long long i, long long j){
    long long int count = 0;
    if(j > i){
        long long mid = (i + j)/2;
        count += _mergeSort(arr,temp,i,mid);
        count += _mergeSort(arr,temp,mid+1,j);
        count += merge(arr,temp,i,mid+1,j);
    }
    return count;
}

long long int mergeSort(long long arr[], long long N){
    
    long long temp[N];
    return _mergeSort(arr, temp, 0, N-1);
}

long long int inversionCount(long long arr[], long long N)
{
    return mergeSort(arr,N);
}

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        
        cout << inversionCount(A,N) << endl;
    }
    
    return 0;
}