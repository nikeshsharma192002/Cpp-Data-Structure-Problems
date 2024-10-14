#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, int> digit_dict {
  {"one", 1},
  {"two", 2},
  {"three", 3},
  {"four", 4},
  {"five", 5},
  {"six", 6},
  {"seven", 7},
  {"eight", 8},
  {"nine", 9},
  {"zero", 0}
};

string convert_to_number(string s) {
  string res = "";
  vector<string> nums = split(s, " ");

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == "double") {
      res += to_string(digit_dict[nums[i + 1]]);
    } else if (nums[i] == "triple") {
      res += to_string(digit_dict[nums[i + 1]]) * 2;
    } else {
      res += to_string(digit_dict[nums[i]]);
    }
  }

  return res;
}

vector<string> split(string s, string delimiter) {
  vector<string> tokens;
  size_t pos = 0;
  while ((pos = s.find(delimiter)) != string::npos) {
    tokens.push_back(s.substr(0, pos));
    s.erase(0, pos + delimiter.length());
  }
  tokens.push_back(s);
  return tokens;
}

int main(){
  string s = "double seven";
string number = convert_to_number(s);

cout << number << endl;
return 0;
}