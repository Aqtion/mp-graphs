#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <list>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>

class Graph {
public:
  Graph() = default;

  void addVertex(std::string);

  void addEdge(std::string source, std::string destination);

  void getEdges(std::string source);

  void areAdjacent(std::string source, std::string destination);

  bool dfs(const std::string& node,
           std::unordered_set<std::string>& visited,
           std::unordered_set<std::string>& recursionStack);

  bool detectCycle();

private:
  std::list<std::string> nodes_;
  std::map<std::string, std::list<std::string>> edges_;
};

#endif GRAPH_HPP