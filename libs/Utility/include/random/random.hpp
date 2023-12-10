#ifndef RANDOM_H
#define RANDOM_H

#include <cstdlib>

namespace Utility {
    class Random {
    public:
        Random() = default;
        ~Random() = default;

        static int uuid() { 
            return rand();
        }
    };
}

#endif // RANDOM_H