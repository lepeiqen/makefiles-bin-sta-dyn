/*
 * add "export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib"
 * in the end of "~/.bashrc" to include the lib dir.
 *  lpq: when building, copy the lib to cur dir and give the implicit dir for lib;
 *  lpq: when run, put the libxxx.so to the "/lib" like  dir, cur dir isn't OK.
 *
 *  or just put the libxxx.so to the "/lib" like  dir, then build/run.
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
