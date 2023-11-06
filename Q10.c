#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int prod = 1;
    for(int i = 0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[j]%arr[i]==0){
                flag = false;
                break;
            }
        }
        if(flag == true){
            prod*=arr[i];
        }
    }
    printf("%d",prod);

    return 0;
}

