#ifndef CONSTANTS_H
#define CONSTANTS_H

typedef enum CoherenceProtocol {
    // single cpu
    Simple = 0, 
    // multiple cpu
    MESI = 1
} CoherenceProtocol;


typedef enum ReplacementPolicy {
    // selects a random 
    Random = 0, 
    // least recently used replacement
    LRU = 1
} ReplacementPolicy;

typedef enum WritePolicy {
    WriteThrough = 0, 
    WriteBack = 1
} WritePolicy;

#endif
