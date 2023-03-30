#include "library.h"
#include <dlfcn.h>

typedef void (*func_ptr)();

int main()
{
	func();

//	void* handle = dlopen("./libtest.so", RTLD_NOW);
//	auto func = (func_ptr)dlsym(handle, "func");
//	func();
	return 0;
}
