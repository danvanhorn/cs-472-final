#include <iostream>
#include "./headers/constants.h"
#include "./headers/cache.h"

using namespace std;

int main(int argc, char** argv) {
    CacheFactory factory = new CacheFactory(argv);
    return 0;
}
