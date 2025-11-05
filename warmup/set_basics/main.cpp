#include <iostream>
#include <set>
using namespace std;

int main() {

    //Create a set of strings (unique, sorted)
    set<string> users;

    //Insert elements - duplicates automatically ignored
    users.insert("alice");
    users.insert("bob");
    users.insert("eve");
    users.insert("alice"); //duplicate
    
    cout << "Users in the system (unique & sorted):\n";
    for (const string &u : users)
        cout << u << "\n";

    // Size check
    cout << "\nTotal unique users: " << users.size() << "\n";

    // Membership test
    string name;
    cout << "\nSearch username: ";
    cin >> name;

    if (users.count(name) == 1)
        cout << name << " exists in the set.\n";
    else
        cout << name << " NOT found.\n";
    
    return 0;
}