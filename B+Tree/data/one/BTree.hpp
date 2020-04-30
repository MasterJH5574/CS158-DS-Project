#include "utility.hpp"
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

        Value at(const Key &key) {

        }

        bool insert(const Key &key, const Value &value) {

        }

        bool modify(const Key &key, const Value &value) {

        }

        bool erase(const Key &key) {
            
        }
        
        
        class iterator {
        private:
            // Your private members go here
        public:
            bool modify(const Value& value){
                
            }

            iterator() {
                // TODO Default Constructor
            }
            iterator(const iterator& other) {
                // TODO Copy Constructor
            }
            // Return a new iterator which points to the n-next elements
            iterator operator++(int) {
                // Todo iterator++
            }
            iterator& operator++() {
                // Todo ++iterator
            }
            iterator operator--(int) {
                // Todo iterator--
            }
            iterator& operator--() {
                // Todo --iterator
            }

            // Overloaded of operator '==' and '!='
            // Check whether the iterators are same
            bool operator==(const iterator& rhs) const {
                // Todo operator ==
            }

            bool operator!=(const iterator& rhs) const {
                // Todo operator !=
            }
        };
        
        iterator begin() {

        }
        
        // Return a iterator to the end(the next element after the last)
        iterator end() {

        }

        iterator find(const Key &key) {
        
        }
        
        iterator lower_bound(const Key &key) {
            
        }
    };
}  // namespace sjtu

