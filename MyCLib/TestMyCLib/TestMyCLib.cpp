// TestMyCLib.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyCLib.h"
#include <iostream>
#include <cassert>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	auto r = MyStrcmp("b", "b");
	assert(r == 0);
	std::cout << "strcmp(b,b)=" << r << endl;

	r = MyStrcmp("a", "c");
	assert(r > 0);
	std::cout << "strcmp(a,c)=" << r << endl;
	std::cout << "strcmp(a,c)=" << strcmp("a","c") << endl;

	r = MyStrcmp("abcdef", "aaff");
	assert(r < 0);
	std::cout << "strcmp(abcdef,aaff)=" << r << endl;
	return 0;
}

