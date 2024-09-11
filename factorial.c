#include <stdio.h>
int factorial(int n){
    int fac = 1;
    int i = 1;
    if(n == 0)
    {
        return 0;
    }
    else if(n <= 0){
        return 0;
    }else{
           while(i<=n)
           {
                
                fac *= i;
                ++i;
           }
           return fac;
           
           
    }
    
}
int main(){
    int c = 5;
    int x = factorial(c);
    printf("%d", x);
}
