// Beautiful Pairs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int getBeautifulPairs(multiset<int> &a, multiset<int> &b) {
	int count = 0;
	for (auto &it : a) {
		multiset<int>::iterator bitr = b.find(it);
		if (bitr != b.end()) {
			count++;
			b.erase(bitr);
		}
	}
	if (b.size() == 0) count--;
	else count++;
	return count;
}

int main()
{
	int n, temp;
	cin >> n;
	multiset<int> a, b;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		a.insert(temp);

	}
	for (int i = 0; i < n; i++) {
		cin >> temp;
		b.insert(temp);
	}
	cout << getBeautifulPairs(a, b);

    return 0;
}

