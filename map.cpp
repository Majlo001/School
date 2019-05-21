
#include "pch.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	//1.
	map<string, int> m1 = { {"a", 1}, {"b", 2}, {"c", 3}, {"d", 4}, {"e", 5} };

	//2.
	map<string, int> m2 = { m1 };

	//3.
	map<string, int> m3;
	m3 = m1;

	//4.
	map<int, int> m4 = { {1,1}, {2,2}, {3,3}, {4,4}, {5,5}, {6,6}, {7,7}, {8,8}, {9,9}, {10,10} };
	map<int, int, greater<int>>m5(m4.begin(), m4.end());

	//5.
	map<int, int>::iterator td;
	td = m4.find(6);
	cout << td->first << " " << td->second << endl << endl;


	//6.
	for (map<int, int>::iterator it = m4.find(2); it != m4.find(9); it++) {
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;


	//7.
	map<int, int>::iterator it;
	m4.erase(m4.find(2), m4.find(9));
	for (it = m4.begin(); it != m4.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;

	//8.
	map<string, int>::iterator itr;
	m3.swap(m1);
	for (itr = m1.begin(); itr != m1.end(); itr++) {
		cout << itr->first << " " << itr->second << endl;
	}
	cout << endl;
	for (itr = m3.begin(); itr != m3.end(); itr++) {
		cout << itr->first << " " << itr->second << endl;
	}
	cout << endl;


	//9.
	m3.insert(m1.find("b"), m1.find("e"));
	for (itr = m3.begin(); itr != m3.end(); itr++) {
		cout << itr->first << " " << itr->second << endl;
	}
	cout << endl;

	return 0;
}
