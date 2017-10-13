#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> node;
vector<vector<int>> edgevector;
vector<vector<int>> edgeMST;
vector<int> parentset;

int graphinit(int n, int m) {
	node.resize(n);
	for (int i = 0; i < node.size(); i++) {
		node[i] = i;
	}
	edgevector.resize(m);
	for (int i = 0; i < edgevector.size(); i++) {
		edgevector[i].resize(3);
		cout << "Enter the next edge (first node, second node, weight): ";
		cin >> (edgevector[i])[0] >> (edgevector[i])[1] >> (edgevector[i])[2];
	}
	return 0;
}

bool sortedge(vector<int> edgeA, vector<int> edgeB) {
	return edgeA[2] < edgeB[2];
}

int MSTinit() {
	edgeMST.resize(node.size() - 1);
	for (int i = 0; i < edgeMST.size(); i++)
		edgeMST[i].resize(3);
	parentset.resize(node.size());
	for (int i = 0; i < node.size(); i++) {
		parentset[i] = i;
	}
	return 0;
}

int findset(int i) {
	if (parentset[i] == i)
		return parentset[i];
	else
		return parentset[i] = findset(parentset[i]);
}

int insameset(int i, int j) {
	return findset(i) == findset(j);
}

int join(int i, int j) {
	parentset[findset(i)] = findset(j);
	return 0;
}

int kruskal() {
	MSTinit();
	sort(edgevector.begin(), edgevector.end(), sortedge);
	int edgecount = 0;
	for (int i = 0; i < edgevector.size() && edgecount < edgeMST.size(); i++) {
		if (!insameset(edgevector[i][0], edgevector[i][1])) {
			edgeMST[edgecount] = edgevector[i];
			join(edgevector[i][0], edgevector[i][1]);
			edgecount++;
		}
	}
	return 0;
}

int main() {
	int n, m;
	cout << "Enter the value of nodes and edges of the graph: ";
	cin >> n >> m;
	graphinit(n, m);	//create the graph

	kruskal();			//use kruskal's algo to find minimum spanning tree
	cout << "The MST includes: " << endl;
	for (int i = 0; i < edgeMST.size(); i++) {
		cout << "The next edge in MST is: " << edgeMST[i][0] << " " << edgeMST[i][1] << " " << edgeMST[i][2] << endl;
	}
	system("pause");
	return 0;
}