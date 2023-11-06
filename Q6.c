#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for(int i = 0;i<n;i++){
        int start;
        int stop;
        scanf("%d %d",&start,&stop);
        arr[i][0] = start;
        arr[i][1] = stop;
    }
    int x;
    int y;
    scanf("%d %d", &x,&y);
    int ind = -1;
    for(int i = 0;i<n;i++){
        if(x<=arr[i][1]){
            ind = i;
            break;
        }
        
    }
    if(ind==-1){
        printf("YES");
    }
    else{
        if(y>arr[ind][0] && y<= arr[ind][1]){
            printf("NO");
        }
        else{
            printf("YES");
        }
    }

    return 0;
}

