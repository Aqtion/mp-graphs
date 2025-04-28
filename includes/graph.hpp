#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <list>
#include <map>

class Graph {
    public:
        Graph() = default;

        void AddVertex(std::string);

        void AddEdge(std::string source, std::string destination);

        std::list<std::string> GetVertices(std::string source);

        std::list<std::string> GetEdges(std::string source);

        bool AreAdjacent(std::string source, std::string destination);

    private:
        std::list<std::string> nodes_;
        std::map<std::string, std::list<std::string>> edges_;
};

#endif GRAPH_HPP