#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int output[size]; 

    int i=0, j=0, multiply = 1;

    while (j<size)
    {
        for (i = 0; i < size; i++)
        {
           if(i == j){
               continue;
           }else
           {
               multiply *= arr[i];
           }
           
        }

        output[j] = multiply;
        multiply = 1;
        j++;
    }
    
    for(i=0; i<size; i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0;
}
