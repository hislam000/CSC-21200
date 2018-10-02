#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<iostream>
namespace project3 { template <typename solution>
	class sequence
	{
	public:
        static const size_t DEFAULT_CAPACITY = 20;
		sequence(size_t size = DEFAULT_CAPACITY); ~sequence(); //Constructor

		// Member Function
		void insert(const solution&);
		void insert(const int&,  solution&);
		void erase_first(); 
        void erase_last();
		void erase_element(const solution&);
		void erase_index(const int &);
		void erase_occurance(const solution&);

        //Count->numbers->value and  //Size->sequence
		int sequence_count()const  { return index; }
		int sequence_size()const   { return grow; }

		//Member function (+= and =) and //Overload Operator  (<<, >>, +, [] and  == )
		sequence<solution>& operator+=(const sequence<solution>&);
		sequence<solution>& operator=(const sequence<solution>&);
        template <typename testing> friend std::ostream& operator <<(std::ostream&, const sequence<testing>&);
		template <typename testing> friend std::istream& operator >>(std::istream&, sequence<testing>& b);
		template <typename testing> friend sequence<testing> operator+(const sequence<testing>&, const sequence<testing>&);
        template <typename testing> friend sequence<testing> operator[](const sequence<testing>, const int&);
		template <typename testing> friend bool operator==(const sequence<testing>&, const sequence<testing>&);

	private:
        int grow;  int index;
        solution * run; // Array capacity
        size_t size; };
}
#endif