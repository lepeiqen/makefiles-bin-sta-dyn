#include <stdio.h>

extern int func();
int main() {
	int res = func(5, 4);
	printf(" res is : %d \n", res);
    return 0;
}
