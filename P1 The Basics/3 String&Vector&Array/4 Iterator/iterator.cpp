
#include <cstddef>
using std::size_t;

#include <vector>
using std::vector;

#include <iostream>
using std::cin; 
using std::cout; 
using std::endl;


int main(){
	// 3.4.1 使用迭代器
	vector<int> v{ 1, 2, 3, 4, 5, 6};
	// 返回第一个元素的迭代器
	auto b = v.begin(), e = v.end();

	string s("some string");
	if (s.begin() ! = s.end()){
		auto it = s.begin();
		*it = toupper(*it);
	}

	cout << s << endl;

	// 将迭代器从一个元素移动到另外一个元素
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);


	// 迭代器类型
	vector<int>::iterator it; // read and write
	string::iterator it2;	  // read and write
	vector<int>::const_iterator it3;  // only read
	string::const_iterator it4;		  // only read


	// begin and end
	vector<int> v;
	const vector<int> cv;
	auto it1 = v.begin();  // it1 > vector<int>::iterator
	auto it2 = cv.begin(); // it2 > vector<int>::const_iterator
	auto it3 = v.cbegin(); // it3 > vector<int>::const_iterator

	// 结合解引用和成员访问操作
	it = v.begin();
	(*it).empty(); // be or not be
	// not *it.empty()
	// 箭头运算符 ->
	// it->mem  ---  (*it).mem


	cout << " 依次输出text每一行直到遇到第一个空白行为止" << endl;
	for (auto it = text.cbegin(); it ! = text.cend() && !it -> empty(); ++it)
		cout<< *it << endl;


	// 3.4.2 迭代器运算
	cout << "// 3.4.2 迭代器运算" <<endl;
	vector<int> text{1,2,3,4,5,6,7,8}
	auto mid = vi.begin() + vi.size()/2;
	auto begin = text.begin(), end = text.end();
	auto mid = text.begin() + (end - begin)/2;
	auto sought = 3
	while (mid != end && mid = != sought){
		if(sought < *mid)
			end = mid;
		else
			begin = mid + 1;
		mid = begin + (end - beg)/2;
	}

	cout << mid << endl;

	return 0;
}