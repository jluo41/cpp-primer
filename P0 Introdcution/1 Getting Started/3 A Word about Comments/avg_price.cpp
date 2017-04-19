#include <iostream>
#include "Sales_item.h"

int main()
{   // variable to hold data for the next transaction
    Sales_item total;

    // read the first transaction and ensure that there are data to process
    if (std::cin >> total)
    {   // variable to hold the running sum
		    Sales_item trans;
        // read and process the remaining transactions
        while (std::cin >> trans)
        {
			// if we're still processing the same book
            if (total.isbn() == trans.isbn())
                total += trans; // update the running total
            else
            {
		        // print results for the previous book
                std::cout << total << std::endl;
                total = trans;  // total now refers to the next book
            }
		    }
        std::cout << total << std::endl; // print the last transaction
    } else {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1;  // indicate failure
    }

    return 0;
}
