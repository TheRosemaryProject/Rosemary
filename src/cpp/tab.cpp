#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <map>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::istringstream;
using std::stringstream;

int main(){
    while (1) {
    string text;
    cout << '>';
    getline (cin, text);
    char space_char = ' ';
    vector<string> words{};

    stringstream sstream(text);
    string word;
    while (std::getline(sstream, word, space_char)){
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        words.push_back(word);
    }
	int x = 0;
	string tokens[10];
    for (const auto &str : words) {
		tokens[x]=str;
		x++;
    }
	string print="print";
	string exita="exit";
    string dollar = "int";
    string bob = "view";
    char dollr = '$';
    string tokens0=tokens[0];
    std::map<string, string>  variables;
    
    string tokens0dupe=tokens[0];

		if (tokens[0]==print) {
			cout <<tokens[1]<<endl;
		}
		if (tokens[0]==exita) {
			exit(0);
		}
        if (tokens[0]==dollar) {string dollar = "int";
            variables[tokens[1]]=tokens[3];
            for (auto& x: variables) {
                
            std::cout <<  x.second << '\n';
                
  }
            cout << "assign";
        }
        if (tokens[0]==bob) {
            tokens0dupe.erase(0, 1);
            cout << "get";
            cout << tokens[1];
            
        }
    }
}