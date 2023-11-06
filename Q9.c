#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int arr[n][2];
    for(int i = 0;i<n;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        arr[i][0] = x;
        arr[i][1] = y;
    }
    int cnt = n*n;
    int freq[cnt][2];
    int ind = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][0]==arr[j][0]){
                freq[ind][0] = arr[i][1];
                freq[ind][1] = arr[j][1];
                ind++;
            }
        }
    }
    int cnt1 = 0;
    for(int i = 0;i<ind;i++){
        for(int j = i+1;j<ind;j++){
            if((freq[i][0]==freq[j][0] && freq[i][1]==freq[j][1])||(freq[i][0]==freq[j][1] && freq[i][1]==freq[j][0])){
                cnt1++;
            }
        }
    }
    printf("%d",cnt1);
    return 0;
}
