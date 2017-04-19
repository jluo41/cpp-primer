#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout; using std::endl;


int main(){
	// 3.3.2 add element to vector
	// p 101
	vector<int> v2;
	for (int i = 0; i! = 100; ++i)
		v2.push_back(i);

	string word;
	vector<string> text;
	while (cin >> word){
		text.push_back(word);
	}

	// 3.3.3 other operation
	vector<int> v{1,2,3,4,5,6,7,8,9};
	for (auto &i :v) // for every element in v
		i *= 1;      // square
	for (auto i:v)
		cout << i << " ";
	cout << endl;

	vector<int>::size_type i;
	// wrong
	// vector::size_type;

	// 103
	// 计算vector内对象的索引
	// input: 
	// [42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93]
	// [0,   0,  0,   1,  1,  0,  2,  3,  2,  4, 1] 11 intervals
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade){
		if (grade <= 100)
			// find the index.
			// grade is 9, grade/10 = 0
			// the value of scores[0] plus 1.
			++scores[grade/10];
	}

	// alternative way.
	while (cin >> grade){
		if (grade <= 100){
			auto ind = grade/10;
			scores[ind] = scores[ind] + 1;
		}
	}

	// 105 
	// 不能用index添加元素
	vector<int> ivec;
	for (decltype(ivec.size()) ix = 0; ix!=10; ++ix)
		// wrong
		// ivec[ix] = ix; fatal wrong
		ivec.push_back(ix);

	
	return 0;
}