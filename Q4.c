#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int m;
    scanf("%d",&m);
    int arr1[m];
    int maxi = 0;
    for(int i=0;i<m;i++){
        scanf("%d",arr1+i);
        if(maxi<arr[i]){
            maxi = arr[i];
        }
    }
    int i = 0;
    int j  =0;
    int unionArr[n+m];
    int intersecArr[n+m];
    for(int i=0;i<n+m;i++){
        unionArr[i] = 0;
        intersecArr[i] = 0;
    }
    int  k =0;
    int t = 0;
    while(i<n&& j<m){
        if(arr[i]>arr1[j]){
            unionArr[k++] = arr1[j++];
        }
        else if(arr[i]<arr1[j]){
            unionArr[k++]=arr[i++];
        }
        else{
            unionArr[k++] = arr[i];
            intersecArr[t++] = arr[i];
            i++;
            j++;
        }
    }
    while(i<n){
        unionArr[k++] = arr[i++];
    }
    while(j<m){
        unionArr[k++] = arr1[j++];
    }
    printf("%d\n",k);
    for(int i=0;i<k;i++){
        printf("%d ",unionArr[i]);
    }
    printf("\n");
    printf("%d",t);
    printf("\n");
    for(int i = 0;i<t;i++){
        printf("%d ",intersecArr[i]);
    }
    printf("\n");
    int freq2[maxi+1];
    for(int i=0;i<maxi+1;i++){
        freq2[i]=0;
    }
    for(int i = 0;i<maxi+1;i++){
        freq2[arr1[i]]=1;
    }
    
    
    int cnt = 0;
    int setArr[n+m];
    for(int i =0;i<n+m;i++){
        setArr[i]++;
    }
    for(int i=0;i<n;i++){
        if(freq2[arr[i]]==0){
            setArr[cnt++] = arr[i];
        }
    }
    printf("%d\n",cnt);
    for(int i = 0;i<cnt;i++){
        printf("%d ",setArr[i]);
    }
    
    return 0;
}

