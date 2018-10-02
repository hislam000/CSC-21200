#ifndef SEQUENCE_H
#define SEQUENCE_H

#include "link_list.h"
#include<iostream>
namespace project4 { template <typename solution>
	class sequence
	{
	public:
		//iterator-> sequence class
	class iterator {
	public:
	iterator() {data = nullptr;i= 0;}
	iterator(solution* data, int i){iterator::data = data;iterator::i = i;}
	iterator& operator++(int i) { i++; return *this;}
	iterator& operator++() { i++; return *this;}
	iterator& operator--(int i) { i--; return *this;}
	iterator& operator--() { i--;return *this;}
	iterator& operator+=(const iterator& itr) {i += itr.i;return *this;}
	iterator& operator-=(const iterator& itr) {i -= itr.i;return *this;}
	iterator& operator+=(int num) {i += num;return *this;}
	iterator& operator-=(int num) {i -= num;return *this;}
	iterator operator+(const iterator& itr) {iterator result;result.i = i + (itr.i + 1);return result;}
	iterator operator+(int i) {iterator result;result.i = i + i;return result;}
	iterator operator-(const iterator& itr) {iterator result;result.i = i - (i + 1);return result;}
	iterator operator-(int i) {iterator result;result.i = i - i;return result;}
    bool operator==(const iterator& itr) {return i == itr.i;}
	bool operator!=(const iterator& itr) {return i != itr.i;}
	solution& operator*(){return data[i];}
    private: 
        int i; solution* data;};
	iterator step_begin() { return step_begin;}
	iterator step_end() { return step_end;}
	//Default, overloaded, copy constructor
		sequence(); sequence(const solution& value); sequence(const sequence& sq1); ~sequence();
	// Member Function
		void insert(const solution&);
		void insert(const int&,  solution&);
		void erase_first(); 
        void erase_last();
		void erase_element(const solution&);
		void erase_index(const int &);
		void erase_occurance(const solution&);
	//
		int sequence_count()const  { return index; }
		int sequence_size()const   { return grow; }
	//Member function (+= and =)
		sequence<solution>& operator+=(const sequence<solution>&);
		sequence<solution>& operator=(const sequence<solution>&);
	friend sequence<solution>& operator+(const sequence<solution>&, const sequence<solution>&);
	private:
		user<solution> *print_type;  user<solution> *tail_ptr;
		size_t len; //Length -> len
		iterator step_begin;  iterator step_end;
	};
}
#include "sequence.solution"
#endif

