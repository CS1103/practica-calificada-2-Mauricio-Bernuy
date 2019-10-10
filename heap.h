#pragma once
#include<vector>
#include<fstream>
#include<iostream>
#include<iterator>
#include<ostream>


using namespace std;

//template class with functions
template<class T>
class heap {
public:
	vector<T> Store;

	auto get_max() {
		auto max = Store[0];
		for(int i = 1; i< size(); i++){
			if (max < Store[i]) {
				max = Store[i];
			}
		}
		return max;
	}

	void insert(T items) {
		Store.push_back(items);
	}

	int size() {
		int size;
		size= Store.size();
		return size;
	}
	void clear() {
		Store.resize(0);
	}

//variadic Insert
template<typename...Types>
	void insert(Types... args) {
		int a[] = { 0,(Store.push_back(args), 0)... };
		static_cast<void>(a);
	}
};



//additional generic functions

//load from
template<typename A, typename T>
void load_from(A in, heap<T>& hp) {
	hp.clear();	
	ifstream file(in);
	istream_iterator<T> start(file), end;
	vector<T> temp(start, end);
}

//input and output overload
template<typename T>
ostream& operator<< (ostream& out, heap<T>& heap) {	out << "{";	for (int i = 0; i < heap.size(); i++) {		out << heap.Store[i];		if (i != heap.size() - 1) {			out << ", ";		}	}	out << "}" << endl;	return out;}template<typename T>istream& operator>> (istream& in, heap<T>& heap) {	T input;	in>>input;	heap.insert(input);	return in;}

