#include <iostream>
using namespace std;

void bruteForce(int* arr, int n){

    int positive[n]={0}, pos = 0, negative[n]={0}, neg = 0, i;

    for(i=0; i<n; i++){
        if(arr[i] >= 0){
            positive[pos] = arr[i];
            pos++;
        }else{
            negative[neg] = arr[i];
            neg++;
        }
    }

    int numPos = pos;
    int numNeg = neg;
    
    pos = neg = i = 0;

    while(i<n && pos<numPos && neg<numNeg){
        if(i%2==0 || i==0){
            arr[i++] = negative[neg++];
        }else{
            arr[i++] = positive[pos++];
        }
    }

    while (pos<numPos)
    {
        arr[i++] = positive[pos++];
    }
    
    while (neg<numNeg)
    {
        arr[i++] = negative[neg++];
    }

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void rightRotate(int *arr, int n, int outOfPlace, int index){
    int temp = arr[index];
    for(int i=index; i>outOfPlace; i--){
        arr[i] = arr[i-1];
    }
    arr[outOfPlace] = temp;
}

void optimal(int *arr, int n){
    int outOfPlace = -1;
    for(int index=0; index<n; index++){
        if(outOfPlace >= 0){
            if(arr[index] < 0 && index % 2 != 0){
                rightRotate(arr, n, outOfPlace, index);

                if(index - outOfPlace >= 2){
                    outOfPlace = outOfPlace + 2;
                }else{
                    outOfPlace = -1;
                }
            }
        }else{
            if((arr[index] < 0 && index % 2 != 0) || (arr[index] > 0 && index % 2 == 0)){
                outOfPlace = index;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{ 
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"using brute force approach :- ";
    bruteForce(arr,n);

    cout<<endl;
    
    cout<<"using optimal approach :- ";
    optimal(arr,n);
    return 0;
}