#ifndef CACHE_SIMULATOR_H
#define CACHE_SIMULATOR_H

typedef struct Trace {
    string* operations;
} Trace; 

class CacheSimulator {
    private:
        Cache cache;
        Trace trace;
    public:
        CacheSimulator(string);
        ~CacheSimulator();
        void operator=(const CacheSimulator &);
        void addCache(const Cache &);
};

#endif