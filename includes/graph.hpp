#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <list>
#include <map>

class Graph {
    public:
        Graph() = default;

        void addVertex(std::string);

        void addEdge(std::string source, std::string destination);

        void getEdges(std::string source);

        void areAdjacent(std::string source, std::string destination);

    private:
        std::list<std::string> nodes_;
        std::map<std::string, std::list<std::string>> edges_;
};

#endif GRAPH_HPP