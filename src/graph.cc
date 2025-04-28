#include "graph.hpp"

bool Graph::dfs(const std::string& node,
                std::unordered_set<std::string>& visited,
                std::unordered_set<std::string>& recursionStack) {
  visited.insert(node);
  recursionStack.insert(node);

  for (const auto& neighbor : edges_[node]) {
    if (visited.find(neighbor) == visited.end()) {
      if (dfs(neighbor, visited, recursionStack)) {
        return true;
      }
    } else if (recursionStack.find(neighbor) != recursionStack.end()) {
      // Found a back edge -> cycle detected
      return true;
    }
  }

  recursionStack.erase(node);
  return false;
}

bool Graph::detectCycle() {
  std::unordered_set<std::string> visited;
  std::unordered_set<std::string> recursionStack;

  for (const std::string& node : nodes_) {
    if (visited.find(node) == visited.end()) {
      if (dfs(node, visited, recursionStack)) {
        return true;
      }
    }
  }
  return false;
}
