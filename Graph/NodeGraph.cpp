#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;

class Node
{
public:
    string name;
    list<string> nbrs;

    Node(string name)
    {
        this->name = name;
    }
};

class Graph
{
    unordered_map<string, Node *> m;

public:
    Graph(vector<string> cities)
    {
        for (string city : cities)
        {
            m[city] = new Node(city);
        }
    }

    void addEdge(string x, string y, bool undir = false)
    {
        m[x]->nbrs.push_back(y);
        if (undir)
        {
            m[y]->nbrs.push_back(x);
        }
    }

    void printAdjList()
    {
        for (auto cityPair : m)
        {
            auto city = cityPair.first;
            Node *node = cityPair.second;

            cout << city << "-->";
            for (auto nrb : node->nbrs)
            {
                cout << nrb << ", ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    vector<string> cities = {"Delhi", "London", "Paris", "New York"};
    Graph g(cities);

    g.addEdge("Delhi", "Paris");
    g.addEdge("Delhi", "London");
    g.addEdge("Paris", "New York");
    g.addEdge("New York", "London");

    g.printAdjList();
}