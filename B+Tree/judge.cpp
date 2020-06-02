#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <map>
#include "BTree.hpp"

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::cerr;

std::vector<int> v1;
std::vector<long long> v2;
const int n = 300000;

long long aa = 13131, bb = 5353, MOD = (long long) (1e9 + 7), now = 1;

int rand() {
    for (int i = 1; i < 3; i++)
        now = (now * aa + bb) % MOD;
    return now;
}

void make_vector() {
    for (int i = 1; i <= n + 1; ++i) {
        v1.push_back(rand());
        v2.push_back((long long) rand());
    }
}

void test_clear() {
    printf("Test Clear.\n");
    sjtu::BTree<int, long long> tree;
    tree.insert(1234, 1234);
    tree.clear();
    if (tree.at(1234)) {
        return;
    }

    tree.insert(4321, 4321);
    if (tree.at(4321) != 4321) {
        return;
    }
    tree.clear();
    if (tree.at(4321)) {
        return;
    }
    printf("Test Clear Pass!\n");
}

void test_insert() {
    printf("Test Insert.\n");
    sjtu::BTree<int, long long> tree;
    for (int i = 1; i <= n; ++i) {
        tree.insert(v1[i], v2[i]);
    }
    puts("Test Insert Pass!");
}


void test_query() {
    printf("Test Query.\n");
    sjtu::BTree<int, long long> tree;
    for (int i = 1; i <= n; ++i) {
        if (tree.at(v1[i]) != v2[i]) {
            cerr << "query error!" << endl;
            return;
        }
    }
    printf("Test Query Pass!\n");
}

void test_iterator() {
    printf("Test Iterator Traverse.\n");
    sjtu::BTree<int, long long> tree;
    std::map<int, long long> mp;
    for (sjtu::BTree<int, long long>::iterator iter = tree.begin(); iter != tree.end(); iter++) {
        mp[iter.getKey()] = iter.getValue();
    }
    for (int i = 1; i <= n; ++i) {
        if (mp[v1[i]] != v2[i]) {
            cerr << "Iterator Traverse Error" << endl;
            return;
        }
    }
    printf("Test Iterator Traverse Pass!\n");

    printf("Test Iterator Lower Bound.\n");
    sjtu::BTree<int, long long>::iterator iter;
    std::map<int, long long>::iterator mp_iter;
    for (int i = 0; i < MOD; i+= aa * 2) {
        mp_iter = mp.lower_bound(i);
        if (mp_iter == mp.end())
            continue;
        iter = tree.lower_bound(i);
        if (iter.getValue() != mp_iter->second) {
            cerr << "Iterator Lower Bound Error" << endl;
            return;
        }
    }
    printf("Test Iterator Lower Bound Pass!\n");

    printf("Test Iterator Find.\n");
    for (int i = 1; i <= n / 4; ++i) {
        iter = tree.find(v1[i]);
        if (iter.getValue() != v2[i]) {
            cerr << "Iterator Find Error" << endl;
            return;
        }
    }
    printf("Test Iterator Find Pass!\n");
}

void test_erase() {
    printf("Test Erase.\n");
    sjtu::BTree<int, long long> tree;
    for (int i = 1; i < n / 2; ++i) {
        tree.erase(v1[i]);
        if (tree.at(v1[i])) {
            cerr << "erase error!" << endl;
            return;
        }
    }
    for (int i = n / 2; i <= n / 1.5; ++i) {
        if (tree.at(v1[i]) != v2[i]) {
            cerr << "erase error!" << endl;
            return;
        }
    }
    printf("Test Erase Pass!\n");
}



int main() {
    int type;
    cin >> type;
    make_vector();
    if (type == 1) {
        test_clear();
        test_insert();
    } else if (type == 2) {
        test_query();
    } else if (type == 3) {
        test_iterator();
    } else if (type == 4) {
        test_erase();
    } else if (type == 5) {
        // use for debug
    }
}
