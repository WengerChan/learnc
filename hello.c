#include <stdio.h>

int main() {
//    int a = 0;
//    if (a) {
//        printf("aaa");
//    } else {
//        printf("bbb");
//    }
//
//    (a) ? printf("aaa") : printf("bbb");

    int a = 1;
    int b = 2;
    int c = 3;
    int d = (a = b+2, c = a+2, b=c+2);
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
