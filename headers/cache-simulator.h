#ifndef CACHE_SIMULATOR_H
#define CACHE_SIMULATOR_H

class CacheSimulator {
    private:
        Cache cache;
    public 
        CacheSimulator();
        ~CacheSimulator();
        void operator=(const CacheSimulator &);
};

#endif