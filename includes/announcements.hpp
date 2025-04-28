#ifndef ANNOUNCEMENTS_HPP_
#define ANNOUNCEMENTS_HPP_

#include <string>
#include <vector>

#include "graph.hpp"

// Instead of calling these source/sink we can use names related to the problem
std::vector<std::string> GetSources(Graph& g);
std::vector<std::string> GetSinks(Graph& g);

#endif