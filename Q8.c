#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int e;
    scanf("%d",&e);
    int maxi = 0;
    int cnt = 0;
    int j = 0;
    int i = 0;
    int bank = e;
    while(j<n){
        if(arr[j]<=bank){
            cnt++;
            if(maxi<cnt){
                maxi =cnt;
            }
            bank-=arr[j];
            j++;
        }
        else{
            if(i==j){
                j++;
                i++;
                cnt = 0;
                continue;
            }
            bank+=arr[i];
            i++;
            cnt--;
        }
        
    }
    printf("%d",maxi);

    return 0;
}

