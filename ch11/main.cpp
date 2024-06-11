#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>



using std::string;
using std::map;
using std::multimap;
using std::multiset;
using std::set;
using std::vector;
using std::pair;
using std::cout;
using std::cin;
using std::endl;


// map	Associative array; holds key - value pairs
// set	Container in which the key is the value
// multimap	map in which a key can appear multiple times
// multiset	set in which a key can appear multiple times


// unordered_map	map organized by a hash function
// unordered_set	set organized by a hash function
// unordered_multimap	Hashed map; keys can appear multiple times
// unordered_multiset	Hashed set; keys can appear multiple times


int main() {

    // count the number of times each word occurs in the input
    map<string, size_t> word_count; // empty map from string to size_t


    set<string> exclude = { "The", "But", "And", "Or", "An", "A",
                       "the", "but", "and", "or", "an", "a" };

    string word;
    while (cin >> word)
        // count only words that are not in exclude
        if (exclude.find(word) == exclude.end())
            ++word_count[word];   // fetch and increment the counter for word

    for (const auto& w : word_count) // for each element in the map
        // print the results
        cout << w.first << " occurs " << w.second
        << ((w.second > 1) ? " times" : " time") << endl;



	return 0;
}

void define() {
    // three elements; authors maps last name to first
    map<string, string> authors = { {"Joyce", "James"},
                                    {"Austen", "Jane"},
                                    {"Dickens", "Charles"} };
}

void duplicate() {
    // define a vector with 20 elements, holding two copies of each number from 0 to 9
    vector<int> ivec;
    for (vector<int>::size_type i = 0; i != 10; ++i) {
        ivec.push_back(i);
        ivec.push_back(i);  // duplicate copies of each number
    }
    // iset holds unique elements from ivec; miset holds all 20 elements
    set<int> iset(ivec.cbegin(), ivec.cend());
    multiset<int> miset(ivec.cbegin(), ivec.cend());
    cout << ivec.size() << endl;    // prints 20
    cout << iset.size() << endl;    // prints 10
    cout << miset.size() << endl;   // prints 20
}

void ppair() {
    pair<string, string> anon;       // holds two strings
    pair<string, size_t> word_count; // holds a string and an size_t
    pair<string, vector<int>> line;  // holds string and vector<int>


    pair<string, string> author{ "James", "Joyce" };

}

pair<string, int>
process(vector<string>& v)
{
    // process v
    if (!v.empty())
        return { v.back(), v.back().size() }; // list initialize
    else
        return pair<string, int>(); // explicitly constructed return value
}