
#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include "Sales_item.h"

#include <vector>
using std::vector;

int main()
{
	// declare the data type
	// default initialization; svec has no elements
	vector<string> svec; // string vector

	vector<int> ivec;    // int vec 
	vector<Sales_item> Sales_vec; // holds Sales_items

	vector<vector<string> > file;  // string > vector > vector
	vector<vector<int> > vecOfvec; // each element is itself a vector

	// all five vectors have size 0
	cout << "vector.size()   " 
		 << svec.size() << " " 
		 << ivec.size() << " "
	     << Sales_vec.size() << " "
	     << file.size() << " " << vecOfvec.size() << endl;

	vector<int> ivec2(10);     // ten elements, each initialized to 0

	vector<int> ivec3(10, -1); // ten int elements, each initialized to -1

	vector<string> svec2(10);  // ten elements, each an empty string
	vector<string> svec3(10, "hi!"); // ten strings; each element is "hi!"

	cout << ivec2.size() << " " 
		 << ivec3.size() << " "
	     << svec2.size() << " " 
	     << svec3.size() << endl;

	int i = 1;
	vector<int> increment(10, i++); // ? 

	// 10 is not a string, so cannot be list initialization
	
	vector<string> v1(10); // construct v1 with ten value-initialized elements
	vector<string> v3(10, "hi");  // ten elements with value "hi"
	// again list initialization is not viable, so ordinary construction

	// all four vectors have size ten
	cout << v1.size() << " " << v3.size() << endl;

	vector<int> v5(10, 1);  // ten elements with value 1
	cout << v5.size() << endl;

	// list
	vector<string> v1{"a", "an", "the"};
	// vector<string> v2('a', "an", "the");
	vector<string> v5{"hi"};

	return 0;
}
