/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int prime[n+1];
    for(int i=0;i<n+1;i++){
        prime[i] = 0;
    }
    for(int i=2;i<n+1;i++){
        if(prime[i]!=0) continue;
        for(int j = i*2;j<n+1;j+=i){
            prime[j] = 1;
        }
    }
    int prod = 1;
    for(int i=2;i<=n;i++){
        if(prime[i]==0 && n%i==0){
            prod*=i;
        }
    }
    printf("%d",prod);

    return 0;
}

