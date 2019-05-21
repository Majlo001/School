#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	//1.
	multimap<string, int> m1 = { {"a", 1}, {"b", 2}, {"c", 3}, {"d", 4}, {"e", 5} };

	//2.
	multimap<string, int> m2 = { m1 };

	//3.
	multimap<string, int> m3;
	m3 = m1;

	//4.
	multimap<int, int> m4 = { {1,1}, {2,2}, {2,3}, {4,4}, {4,5}, {6,6}, {7,7}, {8,8}, {9,9}, {10,10} };
	multimap<int, int, greater<int>>m5(m4.begin(), m4.end());

	//5.
	multimap<int, int>::iterator it;
	it = m4.find(6);
	cout << it->first << " " << it->second << endl << endl;


	//6.
	for (multimap<int, int>::iterator it = m4.find(2); it != m4.find(9); it++) {
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;


	//7.
	m4.erase(m4.find(2), m4.find(9));
	for (it = m4.begin(); it != m4.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;

	//8.
	multimap<string, int>::iterator itr;
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
