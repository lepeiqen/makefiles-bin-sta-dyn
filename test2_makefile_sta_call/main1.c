/*
 * lpq: when building, copy the lib to cur dir and give the implicit dir for lib;
 * when run, just run;
 * */

#include <stdio.h>
#include "test_api.h"

//extern int func(int, int);
int main() {
	//while(0)
	int num1 = 12;
	int num2 = 23;
	int ret = func(num1, num2);
	{
		printf(" I am 30  years old: %d\n", ret);
	}
    return 0;
}
