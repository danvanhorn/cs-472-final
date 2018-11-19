#pragma once
#include "CacheBlock.h"


class CacheSet
{
private:
	int index;
	int blockSize;
	int associativity;
	CacheBlock block;

public:
	CacheSet();
	CacheSet(int, int);
	~CacheSet();
};

