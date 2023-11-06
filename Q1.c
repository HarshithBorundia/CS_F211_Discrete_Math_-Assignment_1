
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool checkPerfectNum(int i){
    int sum = 0;
    for(int j = 1;j<=sqrt(i);j++){
        if(i%j==0 && i!=j){
            sum+=j;
        }
        if(i%(i/j)==0 && i/j!=i && i/j!=j){
            sum+= i/j;
        }
    }
    if(sum==i) return true;
    return false;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(checkPerfectNum(i)){
            printf("%d ",i);
        }
    }

    return 0;
}

