#include <iostream>
#include <list>
using namespace std;

class Graph
{
    int v;
    list<int> *l;

public:
    Graph(int v)
    {
        this->v = v;
        l = new list<int>[v];
    }

    void addEdge(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if (undir)
        {
            l[j].push_back(i);
        }
    }

    void printAdjList()
    {
        for (int i = 0; i < v; i++)
        {
            cout << i << "-->";
            for (auto node : l[i])
            {
                cout << node << ", ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(4, 3);
    g.addEdge(4, 5);
    g.addEdge(2, 5);
    g.addEdge(3, 5);

    g.printAdjList();
}