
#include <iostream>
using namespace std;

int main() {

   Hashtable<int, int> hashtable;
   
   hashtable.put(1,1); hashtable.put(2,2); hashtable.put(3,3);

   cout<<"Value 1:"<<hashtable.get(1)<<endl; 
   //cout<<"Value 2:"<<hashtable.get(2)<<endl; 
   //cout<<"Value 3:"<<hashtable.get(3)<<endl; 
   return 0;
}

