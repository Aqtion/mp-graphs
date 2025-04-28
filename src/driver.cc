#include <fstream>
#include <iostream>
#include <map>

#include "utilities.hpp"

int main() {
  // constexpr char kConsonants[] = {'p', 'k', 'h', 'l', 'm', 'n', 'w'};
  // std::map<int, char> example = {{1, 'a'}, {2, 'b'}};

  // for (int x : {2, 5}) {
  //   if (example.contains(x)) {
  //     std::cout << x << ": Found\n";
  //   } else {
  //     std::cout << x << ": Not found\n";
  //   }
  // }
  std::ifstream ifs{"./data/graph/sample.in"};
  std::string count_str;
  std::getline(ifs, count_str);
  int count = std::stoi(count_str);
  std::cout << count << " nodes" << std::endl;
  for (int i = 0; i < count; ++i) {
    std::string node;
    std::getline(ifs, node);
    std::cout << "Node " << i << " is " << node << std::endl;
  }
  for (std::string line; std::getline(ifs, line); line = "") {
    std::vector<std::string> vec = utilities::Split(line, ',');
    std::cout << vec.size() << std::endl;
    for (const auto& str : vec) {
      std::cout << str << std::endl;
    }
    std::cout << std::endl;
  }
  return 0;
}
