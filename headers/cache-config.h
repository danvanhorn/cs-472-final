#ifndef CACHE_CONFIG_H
#define CACHE_CONFIG_H

#include "./constants.h"
#include "./cache.h"

typedef struct CacheConfig {
    int sets;
    int blockSize;
    int associativity;
    ReplacementPolicy replacement;
    WritePolicy write;
    int cacheCycles;
    int memCycles;
    CoherenceProtocol coherence;
} CacheConfig;

class CacheFactory {
    private:
        CacheConfig config;
    public:
        CacheFactory(char** argv);
        ~CacheFactory();
        const CacheSimulator& buildCache();
}

#endif