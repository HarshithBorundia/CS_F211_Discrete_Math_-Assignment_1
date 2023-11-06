#include <stdio.h>
#include <stdbool.h>
bool flag  =true;
void getsubseq(int arr[], int n, int k, int subseq[], int subseqsiz, int currsum, int idx){
    if(currsum == k && flag ){
        printf("%d\n",subseqsiz);
        for(int i = 0; i < subseqsiz; i++) printf("%d ", subseq[i]);
        flag = false;
        return;
    }
    
    if(idx == n || currsum > k) return;
    subseq[subseqsiz] = arr[idx];
    getsubseq(arr, n, k, subseq, subseqsiz + 1, currsum + arr[idx] , idx+1);
    getsubseq(arr, n, k, subseq, subseqsiz, currsum, idx+1);
}

int main()
{   int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int subseq[n];
    int currsum = 0;
    int idx = 0;
    int subseqsiz = 0;
    getsubseq(arr,n,k,subseq,subseqsiz,currsum,idx);

    return 0;
}

