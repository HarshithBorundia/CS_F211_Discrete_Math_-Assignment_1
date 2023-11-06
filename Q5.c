#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int maxi = 0;
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int freq[maxi+1];
    for(int i = 0;i<maxi+1;i++){
        freq[i] = 0;
    }
    for(int i = 0;i<n;i++){
        freq[arr[i]]++;
    }
    int maxi1 = 0;
    int val = -1;
    for(int i = 0;i<maxi+1;i++){
        if(freq[i]>maxi1){
            maxi1 = freq[i];
            val = i;
        }
    }
    printf("%d %d",arr[(n-1)/2],val);

    return 0;
}
