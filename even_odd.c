#include <stdio.h>
#include <unistd.h>
int nature_n(int n){
    if(n % 2 == 0)
    {
        write(1,"even",4);
    }
    else if(n % 2 != 0)
    {
        write(1,"odd",4);
    }
}
int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    nature_n(n);
}
