#include <bits/stdc++.h>

using namespace std;

bool asc(int x, int y) {
	return x > y;
}

bool dsc(int x, int y) {
	return x < y;
}

//using cmp = bool(*)(int, int);

struct Dsc2 {
	bool operator()(int x, int y) {
		return x < y; // sort in ascending order
	}
};

struct Asc2 {
	bool operator()(int x, int y) {
		return x > y;
	}
};


template<typename T, int size, typename cmp>
void sort(T(&a)[size], cmp c)
{

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size ; j++)
		{
			T temp;
			if (c(a[i], a[j])) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}




int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
#endif

	Asc2 asc2;
	Dsc2 dsc2;
	int a[5] = {10, 70, 50, 30, 40};

	std::cout << "Sorting" <<  std::endl;

	for (auto &x : a) {
		std::cout << x <<  std::endl;
	}

	sort(a, dsc2);

	std::cout << "After sorting" <<  std::endl;

	for (auto &x : a) {
		std::cout << x <<  std::endl;
	}

}
