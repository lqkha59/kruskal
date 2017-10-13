#include <iostream>
#include <vector>
using namespace std;

int del()
{
	vector<int> vectorA;
	int n;
	cout << "Enter the size of VectorA: n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
		vectorA.push_back(i+1);
	cout << "VectorA contains: " << endl;
	for (int i = 0; i < vectorA.size(); i++)
		cout << " " << vectorA[i];

	//delete:
	int i;
	cout << "\nEnter the ith element want to be deleted: i = ";
	cin >> i;
	if (i > 0 && i <= vectorA.size()) {
		for (i--; i < vectorA.size()-1; i++) {
			vectorA[i] = vectorA[i + 1];
		}
		vectorA.resize(n - 1);
	}
	cout << "VectorA contains: " << endl;
	for (int i = 0; i < vectorA.size(); i++)
		cout << " " << vectorA[i];
	system("pause");
	return 0;
}