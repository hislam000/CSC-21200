#include"link_list.h"
#include"sequence.h"

#include<iostream>
#include<ctime>
using namespace std;
using namespace project4;


int main() {
	srand(time(0));

	user<int>* print_type; user<int> user1;
	user1.list_print_insert(print_type, 10);
	cout << "inserted" << std::endl;

	sequence_classes<int>user1(100);
	for (int i = 0; i < 50; ++i) {
		user1.insert(2 * i);
	}
	sequence_classes<int>::iterator i;
	for (i = seq1.begin(); i != seq1.end(); i++) {
		cout << *i << endl;
	}
	system("PAUSE");
	return 0;
}
