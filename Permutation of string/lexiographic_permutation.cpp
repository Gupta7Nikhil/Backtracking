#include <iostream>
#include <algorithm>
using namespace std;
 
// Function to find all lexicographically next permutations of a
// string using `std::next_permutation`
void permutations(string str)
{
    // base case
    if (str.length() == 0) {
        return;
    }
 
    while (1)
    {
        // print the current permutation
        cout << str <<endl;
 
        // find the next lexicographically ordered permutation
        if (!next_permutation(str.begin(), str.end())) {
            break;
        }
    }
}
//  inline bool std::next_permutation<std::__cxx11::string::iterator>(std::__cxx11::string::iterator, std::__cxx11::string::iterator)
// +2 overloads

// Permute range into the next dictionary ordering.

// Parameters:
// __first – Start of range.
// __last – End of range.

// Returns:
// False if wrapped to first permutation, true otherwise. Treats all permutations of the range as a set of dictionary sorted sequences. Permutes the current sequence into the next one of this set. Returns true if there are more sequences to generate.
// If the sequence is the largest of the set, the smallest is generated and false returned.
int main()
{
    string str = "123";
 
    permutations(str);
 
    return 0;
}
