// MyCLib.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MyCLib.h"


int MyStrcmp(const char*a, const char*b)
{
	if (a == 0 || b == 0)
	{
		return b - a;
	}

	int i = 0;
	while (a[i] != 0 && b[i] != 0 && a[i] == b[i])
	{
		i++;
	}

	return b[i] - a[i];
}