#pragma once
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Set
{
public:
	Set() {}
	Set(Set&);
	bool is_empty();
	int size();
	void insert(int);
	void erase(int);
	void erase(vector<int>::iterator);
	void clear();
	vector<int>::iterator find(int);
	vector<int>::iterator find(vector<int>::iterator, vector<int>::iterator, int);
	void display();

private:
	void selection_sort();
	bool checkForDuplicates();

	vector<int> container;
	vector<int>::iterator it;
};

