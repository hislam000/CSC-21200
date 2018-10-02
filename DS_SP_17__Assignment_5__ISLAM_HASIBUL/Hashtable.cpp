
#include "Hashtable.h"
#include <iostream>

//constructor
    template<class k, class v> Hashtable<k, v>::Hashtable(int n) { size = n;
            hashtable = new list<Hash_View>[size];
    for(int i=0; i<size;i++) { Hashtable[i]=new list<Hash_View>();}
}

//hash table
//Key-value pair
        template<class k, class v> //template
        void Hashtable<k, v>::put(k key, v val) {
        Hash_View* view = new Hash_View;
        view->key=key; view->val=val; view->next=NULL; 
        int x = hash(key);
        hashtable[x]->push_back(view);
}
//Gets 
        template<class k, class v> //template
        v Hashtable<k, v>::get(k key) {
        int x = hash(k); v val;
        for(Hash_View *view : hashtable[x]){
        if (view->key == key){ val=view->val; 
        break;}
   }    return val;
    }
//Removes 
        template<class k, class v> //template
        v Hashtable<k, v>::remove(k key) {
        int x = hash(key);   v val;
        for(Hash_View *view : hashtable[x]){
        if (view->key == key){ val=view->val;
        hashtable[x]->remove(view); break;}
   }    return val;
}
//Function
        template<class k, class v> //template
        int Hashtable<k, v>::hash(int key) {  
        return key % size;
}
//Returns size 
        template<class k, class v> //template
        int Hashtable<k, val>::getSize() {  
        return size;
}
