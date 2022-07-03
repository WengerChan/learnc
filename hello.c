#include <stdio.h>
#include <string.h>

enum Sex {
	MALE,
	FEMALE,
	SECRET
};

int add_num(int a, int b) {
    int c = 0;
    c = a + b;
    return c;
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    printf("%d\n", arr[9]);
    arr[9] = 10;
    printf("%d\n", arr[9]);

    for(int i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
	return 0;
}
