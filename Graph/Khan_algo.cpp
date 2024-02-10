#include <iostream>
#include <list>
#include <queue>
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

    void addEdge(int i, int j)
    {
        l[i].push_back(j);
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

    void topologicalSort()
    {
        vector<int> inDegree(v, 0);
        queue<int> q;

        for (int i = 0; i < v; i++)
        {
            for (auto nbr : l[i])
            {
                inDegree[nbr]++;
            }
        }

        for (int i = 0; i < v; i++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int node = q.front();
            cout << node << " ";
            q.pop();

            for (auto nbr : l[node])
            {
                inDegree[nbr]--;
                if (inDegree[nbr] == 0)
                {
                    q.push(nbr);
                }
            }
        }
    }
};

int main()
{
    Graph g(6);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 4);
    g.addEdge(4, 5);
    g.addEdge(2, 3);
    g.addEdge(3, 5);

    g.topologicalSort();
}