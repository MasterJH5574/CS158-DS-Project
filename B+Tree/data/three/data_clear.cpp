#include <cassert>
#include <iostream>
#include <string>
#include "BTree.hpp"

using namespace std;
sjtu::BTree<int, int> bTree;

int main() {
    bTree.insert(1234, 1234);
    bTree.clear();
    if (bTree.at(1234)) {
        throw 1;
    }

    bTree.insert(4321, 4321);
    if (bTree.at(4321) != 4321) {
        throw 1;
    }
    bTree.clear();
    if (bTree.at(4321)) {
        throw 1;
    }
    return 0;
}