#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <climits>
using namespace std;

class Graph
{
    int v;
    list<pair<int, int>> *l;

public:
    Graph(int v)
    {
        this->v = v;
        l = new list<pair<int, int>>[v];
    }

    void addEdge(int i, int j, int w, bool unDir = true)
    {
        l[i].push_back({j, w});
        if (unDir)
        {
            l[j].push_back({i, w});
        }
    }

    void dijikstra(int source, int dest)
    {
        vector<int> dist(v, INT_MAX);
        set<pair<int, int>> s;

        dist[source] = 0;
        s.insert({source, 0});

        while (!s.empty())
        {
            auto it = s.begin();
            int node = it->first;
            int distTillNow = it->second;
            s.erase(it);

            for (auto nbrPair : l[node])
            {
                int nbr = nbrPair.first;
                int edge = nbrPair.second;

                if (distTillNow + edge < dist[nbr])
                {
                    auto f = s.find({nbr, dist[nbr]});
                    if (f != s.end())
                    {
                        s.erase(f);
                    }

                    dist[nbr] = distTillNow + edge;
                    s.insert({nbr, dist[nbr]});
                }
            }
        }

        cout << dist[dest];
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1, 1);
    g.addEdge(0, 3, 7);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 4, 3);

    g.dijikstra(0, 4);
}