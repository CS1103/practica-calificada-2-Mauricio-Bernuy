#include <iostream>

#include "heap.h"
using namespace std;

int main()
{
    heap<int> h;
    /*load_from("data.txt", h);
    cout << "heap" << endl;*/
    cout << h;
    h.insert(10);
    h.insert(20);
    h.insert(40);
    h.insert(50);
    h.insert(10);
	h.insert(12,21,12,31,312,32,2);
	auto size = h.size();
	cout << size << endl;
	auto max = h.get_max();
	cout << max << endl;
	cout << h.Store[8];

    cout << "heap" << endl;
    cout << h;
    cout << "heap" << endl;
    cout << h;
    cin >> h;
	cout << h;
    cout << "heap" << endl;
    cout << h;
	insert(h, 100, 200);
    cout << "heap" << endl;
    cout << h;
    load_from("data.txt", h);
    cout << h;
    return 0;
}