#ifndef CACHE_H
#define CACHE_H

#include "./constants.h"
#include "./cache-config.h"

class Cache {
    public:
        Cache(CacheConfig config);
        ~Cache();
        void operator=(const Cache &);
};


#endif
