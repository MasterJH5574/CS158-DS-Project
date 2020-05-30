#include <functional>
#include <cstddef>
#include "exception.hpp"

namespace sjtu {
    template <class Key, class Value>
    class BTree {
    private:
        // Your private members go here
    public:
        BTree() {

        }

        BTree(const char *fname) {

        }

        ~BTree() {

        }

        // Clear the BTree
        void clear() {

        }

        bool insert(const Key &key, const Value &value) {

        }

        bool modify(const Key &key, const Value &value) {

        }

        Value at(const Key &key) {

        }

        bool erase(const Key &key) {
            
        }
        
        
        class iterator {
        private:
            // Your private members go here
        public:
            iterator() {
                
            }
            iterator(const iterator& other) {
                
            }

            // modify by iterator
            bool modify(const Value& value) {
                
            }

            Key getKey() const {

            }

            Value getValue() const {

            }

            iterator operator++(int) {

            }

            iterator& operator++() {
                
            }
            iterator operator--(int) {
                
            }

            iterator& operator--() {
                
            }

            // Overloaded of operator '==' and '!='
            // Check whether the iterators are same
            bool operator==(const iterator& rhs) const {
                
            }

            bool operator!=(const iterator& rhs) const {
                
            }
        };
        
        iterator begin() {

        }
        
        // return an iterator to the end(the next element after the last)
        iterator end() {

        }

        iterator find(const Key &key) {
        
        }
        
        // return an iterator whose key is the smallest key greater or equal than 'key'
        iterator lower_bound(const Key &key) {
            
        }
    };
}  // namespace sjtu

