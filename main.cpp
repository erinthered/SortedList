#include<iostream>
#include<fstream>
#include<list>

#include "sortedList.h"
#include "sortedList.cpp"

using namespace std;

int main() {

SortedList<int> myList;
myList.insert(12);
myList.insert(1);
myList.insert(13);
myList.insert(4);
myList.print(cout);

return 0;

}
