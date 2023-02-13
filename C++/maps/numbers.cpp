//
// Created by Mert Aydın on 7.02.2023.
//

#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {
    map<string, int> myNumbers; // <Key Type, Value Type> mapName
    myNumbers.insert(pair<string, int>("one", 1));
    myNumbers.insert(pair<string, int>("two", 2));
    myNumbers.insert(pair<string, int>("three", 2));
    myNumbers.insert(pair<string, int>("four", 3));

    for (auto it = myNumbers.begin(); it != myNumbers.end(); ) {
        cout << it->first << " " << it->second << endl;
        if (it->second == 2) {
            myNumbers.erase(it++);
        } else {
            it++;
        }
    }

    for (auto pair: myNumbers) {
        cout << pair.first << " - " << pair.second << endl;
    }

}

/*
 *  map<string, string> myDictionary; // <Key Type, Value Type> mapName
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));
    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(pair<string, string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("apple", "der Apfel"));

    myDictionary["strawberry"] = "Helloo"; // Access and change element

    cout << myDictionary.size() << endl;
    // myDictionary.clear(); deletes all entries
    // myDictionary.erase("apple"); delete certain key entries

    for(auto pair:myDictionary) {
        cout << pair.first << "-" << pair.second << endl;
    }
 */