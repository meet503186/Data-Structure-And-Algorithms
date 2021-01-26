
    #include<iostream>
    using namespace std;
    void sort012(int[],int);
    
    int main() {
    
        int t;
        cin >> t;
    
        while(t--){
            int n;
            cin >>n;
            int a[n];
            for(int i=0;i<n;i++){
                cin >> a[i];
            }
    
            sort012(a, n);
    
            for(int i=0;i<n;i++){
                cout << a[i]  << " ";
            }
    
            cout << endl;
            
            
        }
        return 0;
    }
    
    
    void sort012(int arr[], int n)
    {
        int count0 = 0, count1 = 0, count2 = 0, i;
        
        for(i=0; i<n; i++){
            switch(arr[i]){
                case 0:
                    count0++;
                    break;
                case 1:
                    count1++;
                    break;
                case 2:
                    count2++;
                    break;
            }
        }
        
        i=0;
        
        while(count0 > 0){
            arr[i] = 0;
            i++;
            count0--;
        }
        
        while(count1 > 0){
            arr[i] = 1;
            i++;
            count1--;
        }
        
        while(count2 > 0){
            arr[i] = 2;
            i++;
            count2--;
        }
        
    }