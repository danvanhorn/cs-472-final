#include "CacheSet.h"



CacheSet::CacheSet()
{
}

CacheSet::CacheSet(int blockSize, int associativity)
{
	this->blockSize = blockSize;
	this->associativity = associativity;

}

CacheSet::~CacheSet()
{
}
