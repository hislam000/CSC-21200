
#ifndef HASHTABLE_H_
#define HASHTABLE_H_

//#include <list>
//#include <cassert>
//#include <algorithm>

#include <iostream>
using namespace std;
template <class k, class v> class Hashtable {
private:
//key //value
      k key;  v val;
   struct Hash_View {
            k key; v val;  Hash_View* next;};
            list<Hash_View*>** hashtable;
           int size;
public:
            //constructor
            //hashtable
             Hashtable(int n = 20); 
            void put(k key, v val); //key pair

            //Given key
           v get(k key); //Get
            v remove(k key); //Remove 

        int hash(int key); //Hash Function
        int getSize();    //Returns Size
};
#endif

