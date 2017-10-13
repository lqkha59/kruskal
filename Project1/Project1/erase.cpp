#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int erase()
{
	int x = pow(5, 3);
	cout << x << endl;

	vector<int> vectorA;
	int n;
	cout << "Enter the size of VectorA: n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
		vectorA.push_back(i + 1);
	cout << "VectorA contains: " << endl;
	for (int i = 0; i < vectorA.size(); i++)
		cout << " " << vectorA[i];

	//erase:
	int val;
	cout << "\nEnter the value you want to delete: val = ";
	cin >> val;
	vector<int>::iterator it = find(vectorA.begin(), vectorA.end(), val);
	if (it != vectorA.end()) {
		vectorA.erase(it);
		cout << "VectorA contains: " << endl;
		for (int i = 0; i < vectorA.size(); i++)
			cout << " " << vectorA[i];
	}
	else
		cout << "\nThe value is not valid"<<endl;

	//push back 1 of the same value
	vectorA.push_back(8);
	cout << "\nVectorA contains: " << endl;
	for (int i = 0; i < vectorA.size(); i++)
		cout << " " << vectorA[i];

	//find index of input value at the first time
	cout << "\nEnter the value you want to find its index: val = ";
	cin >> val;
	int j = -1;
	for (int i = 0; i < vectorA.size(); i++) {
		if (vectorA[i] == val) {
			j = i;
			break;
		}
	}
	cout << j << endl;

	//find index of the first item that less than its predecessor
	for (int i = 1; i < vectorA.size(); i++) {
		if (vectorA[i] < vectorA[i - 1]) {
			j = i;
			break;
		}
	}
	cout << j << endl;

	//prefix averages
	int sum = 0;
	vector<double> prefixAverage;
	for (int i = 0; i < vectorA.size(); i++) {
		sum += vectorA[i];
		prefixAverage.push_back((double) sum / (i + 1));
	}
	cout << "The prefix averages are:";
	for (int i = 0; i < prefixAverage.size(); i++)
		cout << " " << prefixAverage[i];

	//fibonacci numbers
	vector<int> fibonacciVector;
	fibonacciVector.push_back(0);
	fibonacciVector.push_back(1);
	cout << "\nEnter the number of elements in fibonacci list: n = ";
	cin >> n;
	fibonacciVector.resize(n);
	for (int i = 2; i < n; i++)
		fibonacciVector[i] = fibonacciVector[i - 1] + fibonacciVector[i - 2];
	cout << "The fibonacci list is: ";
	for (int i = 0; i < fibonacciVector.size(); i++)
		cout << " " << fibonacciVector[i];

	//fibonacci using recursion
	cout << "\nEnter the number of elements in fibonacci list: n = ";
	cin >> n;
	fibonacciVector.resize(n);
	cout << "The fibonacci list is: ";
	for (int i = 0; i < fibonacciVector.size(); i++) {
		fibonacciVector[i] = fibonacci(i);
		cout << " " << fibonacciVector[i];
	}
		
	//insertion sort
	vector<int> vectorB;
	vectorB.push_back(5);
	vectorB.push_back(2);
	vectorB.push_back(1);
	vectorB.push_back(8);
	vectorB.push_back(9);
	vectorB.push_back(7);
	vectorB.push_back(3);
	cout << "\nVector B has:";
	for (int i = 0; i < vectorB.size(); i++)
		cout << " " << vectorB[i];
	for (int i = 1; i < vectorB.size(); i++) {
		for (int j = i; j > 0; j--) {
			if (vectorB[j] < vectorB[j - 1]) {
				int y = vectorB[j];
				vectorB[j] = vectorB[j - 1];
				vectorB[j - 1] = y;
			}
			else
				break;
		}
	}
	cout << "\nAfter using insertion sort, Vector B has:";
		for (int i = 0; i < vectorB.size(); i++)
			cout << " " << vectorB[i];

	system("pause");
	return 0;
}