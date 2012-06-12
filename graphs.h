#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

class graph 
{

    public :
        vector< pair< int, int > > AdjacencyList;
        int LatticeConstant;
        int NumberSites;
        int NumberBonds;
        int Identifier;
        vector< int > SubgraphList;
        vector< vector< pair<int, int> > > RealSpaceCoordinates;

        graph();
        graph(vector< pair<int, int> > & , int, int, int, int, vector< int > & );
        graph(vector< pair<int, int> > & , int, int, int, int, vector< int > &, vector< vector< pair<int, int> > > );

        graph& operator=(const graph & other);
        bool operator==(const graph & other);

        graph GetGraphFromFile(const int Identifier, const string & file);
};

void ReadGraphsFromFile(vector< graph > & graphList, const string & file);
void WriteGraphsToFile(vector< graph > & graphList, string file);
