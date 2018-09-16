#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {      
    int operator()(int* coordinates, int* sizes, int dimensions) {
        //width*y+x (2 dimensions)
        // z * height * width + y * width + x (3 dimensions)
        int pos=0;
        for(int i=dimensions-1; i>=0; i--){
            pos=pos*sizes[i];
            pos=pos+coordinates[i];
        }
        return pos;
    }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
    //system("pause");
    return EXIT_SUCCESS;
}