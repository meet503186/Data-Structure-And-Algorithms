#include <bits/stdc++.h>
using namespace std; 

bool find3Numbers(int arr[], int N, int X)
{
    bool triplet = false;
    int j,k;
    
    for(int i=0; i<N; i++){
        j=i+1;
        k=j+1;
        
        while(j < N-1 && k < N){
           
            if(arr[i] + arr[j] + arr[k] == X){
                triplet = true;
                break;
            }
            
            k++;
            if(k == N){
                j++;
                k = j+1;
            }
        }
        if(triplet){
            break;
        }
    }
    return triplet;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}