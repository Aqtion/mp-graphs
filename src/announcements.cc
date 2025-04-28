#include "announcements.hpp"

std::vector<std::string> GetSources(Graph& g) {
  std::map<std::string, bool> source_check;

  for (const auto& start : g.GetVertices()) {
    if (!source_check.contains(start)) source_check[start] = true;
    for (const auto& dest : g.GetEdges(start))
      source_check[dest] = false;
  }
  std::vector<std::string> out;

  for (const auto& [vertex, is_source] : source_check)
    if (is_source) out.push_back(vertex);

  return out;
}


std::vector<std::string> GetSinks(Graph& g) {
  std::vector<std::string> out;

  for (const auto& vertex : g.GetVertices())
    if (g.GetEdges(vertex).empty())
      out.push_back(vertex);

  return out;
}