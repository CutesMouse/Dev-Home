## regex
#include <regex>
std::regex Upper("[ABCDE]");
std::regex_replace (string,regex,"toBeReplaced");

## min_element
#include <algorithm>
iter = min_element(iter begin, iter end)
  
## for_each
把字串轉為全小寫
for_each(original.begin(),original.end(),[](char& s) {
    s = tolower(s);
  });

## tolower, toupper
int toupper(char c);

