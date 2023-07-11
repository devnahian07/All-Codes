#include<iostream>
#include<map>
#include<unordered_map>
#include<string>

using namespace std;

int main()
{
	unordered_map<string, int> mymap;
	mymap["tanveer"] = 123;
	mymap["kajol"] = 456;
	mymap["omi"] = 789;
	// cout << mymap["omi"] << "\n";
	mymap["tanveer"] = 45666;
	// cout << mymap["tanveer"];
	for(auto it = mymap.begin(); it != mymap.end(); it++){
		cout << (*it).first << "->" << (*it).second << "\n";
	}
	// cout << mymap.size() << "\n";
	// cout << mymap.empty() << "\n";
	// (mymap.find("mokbul") == mymap.end()) ? cout << "N" : cout << "Y";
	cout << mymap.erase("kajol") << "\n";
	for(auto it = mymap.begin(); it != mymap.end(); it++){
		cout << (*it).first << "->" << (*it).second << "\n";
	}
	return 0;
}