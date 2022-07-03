#include <stdio.h>

extern int val_g;
extern int val1_g;

int main(){
    printf("%d\n", val_g);
    printf("%d\n", val1_g);
    return 0;
}