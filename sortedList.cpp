#include<list>
#include<fstream>
#include<iostream>

#include "sortedList.h"

#ifndef __CS235_SORTEDLIST_CPP
#define __CS235_SORTEDLIST_CPP

template<class ItemType>
void SortedList<ItemType>::insert(ItemType n) {
    bool biggest = true;
    if(classList.empty()) {
        classList.push_front(n);
    }
    else { 
        for(auto it = classList.begin(); it != classList.end(); ++it) {
            if(*it > n) {
                classList.insert(it, n);
                biggest = false;
                break;
            }
        }
        if(biggest) {
            classList.push_back(n);
        }
    }       
}

template<class ItemType>
void SortedList<ItemType>::print(std::ostream& out) const {

    for(auto it = classList.cbegin(); it != classList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

#endif // __CS235_SORTEDLIST_CPP
