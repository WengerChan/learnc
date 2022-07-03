#include <stdio.h>

enum Sex {
	MALE,
	FEMALE,
	SECRET
};


//int do_something() {
//	printf("%d\n", 10);
//	return 0;
//}

int main() {
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c', '\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
