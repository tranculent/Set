#include "Set.h"

Set::Set(Set& s) {
	container = s.container;
}

bool Set::is_empty() {
	return container.size() == 0;
}

void Set::insert(int element) {
	if (find(container.begin(), container.end(), element) == container.end()) {
		container.push_back(element);
		if (container.size() > 1)
			selection_sort();
	}
}

void Set::selection_sort() {
	for (int i = 0; i < container.size(); i++) {
		int remove = i;
		for (int j = i + 1; j < container.size(); j++) {
			if (container[j] < container[i]) {
				remove = j;
			}
		}
		if (remove != i) {
			std::swap(container[i], container[remove]);
		}
	}
}

void Set::display() {
	for (int& i : container) {
		cout << i << " ";
	}
}

int Set::size() {
	return container.size();
}

void Set::clear() {
	container.clear();
}

vector<int>::iterator Set::find(int element) {
	for (it = container.begin(); it != container.end(); it++) {
		if (*it == element) {
			return it;
		}
	}
	return container.end();
}

vector<int>::iterator Set::find(vector<int>::iterator it1, vector<int>::iterator it2, int x) {
	while (it1 != it2) {
		if (*it1 == x)
			return it1;
		it1++;
	}
	return container.end();
}

void Set::erase(int element) {
	if (!is_empty())
		container.erase(find(element));
}

void Set::erase(vector<int>::iterator it1) {
	if (!is_empty())
		container.erase(it1);
}

bool Set::checkForDuplicates() {
	for (int i = 0; i < container.size(); i++) {
		for (int j = 0; j < container.size(); j++) {
			if (i != j && container[i] == container[j]) {
				return true;
			}
		}
	}

	return false;
}