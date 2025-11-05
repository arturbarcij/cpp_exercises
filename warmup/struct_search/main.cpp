#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Define struct
struct Book {
    string title;
    int year;
};

int main() {
    //Create a vector of Book objects
    vector<Book> library = {
        {"1984", 1949},
        {"Dune", 1965},
        {"The Hobbit", 1937},
        {"Neuromancer", 1984}
    };

    int yearToFind;
    cout << "Enter a year to search: ";
    cin >> yearToFind;

    // Search using find_if with a lambda function
    auto it = find_if(library.begin(), library.end(),
                        [&](const Book &b) {
                            return b.year == yearToFind;
                        });
    
    if (it != library.end()) {
        cout << "Found: " << it->title << " (" << it->year << ")\n";
    } else {
        cout << "No book found from year " << yearToFind << "\n";
    }

    return 0;
}
