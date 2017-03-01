#include<list>
#include<fstream>

#ifndef __CS235_SORTEDLIST_H
#define __CS235_SORTEDLIST_H

template<class ItemType>
class SortedList {
    public:
        void insert(ItemType n);
        void print(std::ostream& out) const;
    
    private:
        std::list<ItemType> classList;
};

#include "sortedList.cpp"

#endif //__CS235_SORTEDLIST_H
