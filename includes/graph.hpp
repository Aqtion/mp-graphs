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

    void AddVertex(std::string);

    void AddEdge(std::string source, std::string destination);

    std::list<std::string> GetVertices(std::string source);

    std::list<std::string> GetEdges(std::string source);

    bool AreAdjacent(std::string source, std::string destination);

    bool dfs(const std::string& node,
           std::unordered_set<std::string>& visited,
           std::unordered_set<std::string>& recursionStack);

    bool DetectCycle();

private:
  std::list<std::string> nodes_;
  std::map<std::string, std::list<std::string>> edges_;
};

#endif GRAPH_HPP