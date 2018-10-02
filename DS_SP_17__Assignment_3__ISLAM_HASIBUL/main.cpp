
#include <iostream>
#include "sequence.h"
#include<string>
using namespace std;
using namespace project3;

int main(){
    cout << "Sequence\n"; cout << "Sequence bag";
	int sizeSequence;  cin >> sizeSequence; sequence<int>xtype(sizeSequence);

	cout << "Elements\n"; int elements;
	for (int i = 0; i < sizeSequence; i++) { cin >> elements; xtype.sequence_insert(elements); }

	cout << "Put Sequence\n" << xtype << endl;
    cout << "Size Bag: " << xtype.sequence_size() << endl;
	cout << "Removing Occurence";

	int random;  cin >> random; xtype.erase_occurance(random);
	cout << "Sequence\n" << xtype << endl;
	cout << "Size Bag: " << xtype.sequence_size() << endl;


	cout << "Removing element" << endl;
	xtype.erase_first();
	cout << "Sequence\n" << xtype << endl;
	cout << "Size Bag: " << xtype.sequence_size() << endl;

	cout << "Removing Element\n";
	xtype.erase_last();
	cout << "Sequence\n" << xtype << endl;
	cout << "Size Bag: " << xtype.sequence_size() << endl;

	cout << "Remove";
	int remove_element; cin >> remove_element; xtype.sequence_erase_element(remove_element);
	cout << "Sequence\n" << xtype << endl;
	cout << "Size bag: " << xtype.sequence_size() << endl;

	cout << "Insert";
	int insert_value;  int insert_index;  cin >> insert_index >> insert_value; 
    xtype.insert(insert_index, insert_value); 
	cout << "Sequence\n" << xtype << endl;
	cout << "Size Bag: " << xtype.sequence_size() << endl;

	cout << "Remove";
	int remove_index;  cin >> remove_index; xtype.sequence_erase_index(remove_index);
	cout << "Sequence\n" << xtype << endl;
	cout << "Size bag: " << xtype.sequence_size() << endl;

	//Overloaded operators
	random<int> sequence1; random<int> sequence2;
	for (int i = 1; i < 10; i++) { sequence1.sequence_insert(i); sequence2.sequence_insert(i * 2);}

	cout << "Overload Operators" << endl; cout << "Not\n";
	if (sequence1 == sequence2) { cout << "Equal" << endl;}
	else { cout << "Not equal" << endl;}
    random<int> sum = sequence1 + sequence2; cout << "Sum\n" << sum;

	system("PAUSE");
	return 0;
}