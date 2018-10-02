#ifndef LINK_LIST_H
#define LINK_LIST_H

namespace project4 { template <typename solution>
	class sequence
	{
	public:
		//Constructor
		sequence(const solution& value_x = solution(), sequence *value_y = NULL) {
			x = value_x; y = value_y;}
		//Destructor
		~sequence();

		//Member funtions to set x and y
		void set_x(const solution& new_x) { x = new_x; }
		void set_y(sequence *new_y) { y = new_y; }

		// Member functions to get the x and y
		solution get_x() const { return x; }
		const sequence * get_y() const { return y; }
		sequence *get_y() { return y; }

		// Function link List	
		void list_print_insert(sequence<solution>*& print_type, const solution& entry); 
		void list_insert(sequence<solution>* previous_ptr, const solution& entry);
	
		//search for an element in the list
		sequence<solution>* list_search(sequence* print_type, const solution& target); 
		const sequence<solution>* list_search(const sequence<solution>* print_type, const solution& target);
		//Function
		void list_print_remove(sequence<solution>*& print_type);   
		void list_remove(sequence<solution>* previous_ptr); 
		void list_clear(sequence<solution>*& print_type); 
		void list_copy(const sequence<solution>* source_ptr, 
		sequence<solution>*& print_type, sequence<solution>*& tail_ptr);
		friend size_t list_length(const sequence<solution>* print_type);
	private:
		solution x; //  to store data
		sequence * y; // to point to next 
		size_t len; //Length -> len
	};
}
#include "link_list.solution"
#endif // ! LINK_LIST_H