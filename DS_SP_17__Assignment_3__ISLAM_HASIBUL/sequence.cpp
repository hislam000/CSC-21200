#include<iostream>
#include<cassert>
#include "sequence.h"
#include <string>
namespace project3 { template <typename solution>
	//Constructor
	sequence<solution>::sequence(size_t capacity)
	{ grow = 0; size = capacity; run = new solution[size];
	}
	template <typename solution>
    sequence<solution>::~sequence()
	{ delete[] run;
	}
	template <typename solution>
	//Function
	void sequence<solution>::sequence_insert(const solution& value) {
		assert(grow < DEFAULT_CAPACITY); run[grow++] = value;
	} 
    template <typename solution>
	//Value
	void sequence<solution>::sequence_insert(const int& ind,   solution& value) {
		assert(grow < DEFAULT_CAPACITY); solution temp[DEFAULT_CAPACITY];

	//Array
		++grow;
		for (size_t i = 0; i <= grow; i++) {
		if (run[i] == value) {
		for (size_t j = i; j<grow; j++) { temp[j] = run[j]; }
		for (size_t k = i; k <= grow; k++) { run[k + 1] = temp[k];}
		    run[value] = ind; index++; return;}
		}return;}

	//Erasing number
	template <typename solution>
	void sequence<solution>::erase_occurance(const solution& value){

	for(int i=0; i < grow; i++){
	if ((run[i] == value) && (run[i+1] != value)){ run[i] = run[i+1]; --grow;}
    else { run[i] = run[--grow];}
    }
	}
	template <typename solution>
	//erase first
	void sequence<solution>::erase_first() {
		for (int i = 0; i < grow-1; i++) { run[i] = run[i + 1];} --grow;
	}
	template <typename solution>
	//erase last
	void sequence<solution>::erase_last() {
		assert(grow < DEFAULT_CAPACITY); solution last; last = run[--grow];
	}
	template <typename solution>
	//erase element
	void sequence<solution>::erase_element(const solution& value) {
		int index = -1;
		for (int i = 0; i < grow; i++){
		if (run[i] == value){index = i;break;}
		}
		if (index == -1) return; run[index] = run[--grow];
	}
	template <typename solution>
	void sequence<solution>::erase_index(const int& index) {
		assert(index < grow);run[index] = run[grow - 1];--grow;
	}
    //overload operator >> << [] += + and =  
    // overload >> operator
	template <typename solution>
	std::istream& operator>>(std::istream& in, sequence<solution>& sequence1) {
		in >> sequence1.run[sequence1.grow++];return in;
	}
	template <typename solution>
	// overload << operator
	std::ostream& operator<<(std::ostream& out, const sequence<solution>& sequence1) {
		for (size_t i = 0; i<sequence1.grow; i++) {
			out << sequence1.run[i] << std::endl;}
            return out;
	}
    template <typename solution>
    //[] operator
   sequence<solution>&sequence<solution>::operator[](const sequence<solution>, const int& index){
       return run[index];
    }
	template <typename solution>
	//+= operaor
	    sequence<solution>& sequence<solution>::operator+=(const sequence<solution>& sequence1) {
		for (size_t i = 0; i<(sequence1.grow); i++) {
        run[grow + i] = sequence1.run[i];} grow = grow + sequence1.grow; return *this;
    }
	template <typename solution>
	//+ operator
	sequence<solution> operator+(const sequence<solution>& sequence1, const sequence<solution>& seq2) {
		sequence<solution> sum = sequence1; sum += sequence1; return sum;
	}
	template <typename solution>
	    //= operator
	    sequence<solution>& sequence<solution>::operator=(const sequence<solution>& sequence1) {
		if (grow != sequence1.grow) { delete[] run; run = new solution[sequence1.grow];}

		for (size_t i = 0; i<sequence1.grow; i++) { run[i] = sequence1.run[i];
		} index = sequence1.index; return *this; 
    }
    //-------------------------------------//
	template <typename solution>
	bool  operator==(const sequence<solution>& sequence1, const sequence<solution>& seq2) {
		if (sequence1.seq_size() != seq2.seq_size()) { return false; }
		for (int i = 0; i <= sequence1.seq_count(); i++) {
		if (seq2.run[i] != sequence1.run[i]) { return false; }
		}
		return true;}
}