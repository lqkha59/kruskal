#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <list>
using namespace std;

int hello() {
	cout << "Hello World\n";
	
	//vector
	vector<int> vectorA;
	vectorA.push_back(80);
	vectorA.push_back(20);
	vectorA.push_back(31);
	for (int i = 0; i < vectorA.size(); i++)
		cout << vectorA[i] << " ";
	cout << endl;
	
	vectorA.pop_back();
	for (int i = 0; i < vectorA.size(); i++)
		cout << vectorA[i] << " ";
	cout << endl;

	vector<int>::iterator it = std::find(vectorA.begin(), vectorA.end(), 20); //it: pointer of 20 needed to find;
	if (it == vectorA.end())
		cout << "can not find" << endl;
	else
		cout << *it << endl;

	//map
	map<int, int> mapA;
	mapA[1] = 5;
	mapA[2] = 10;
	mapA[3] = 15;
	mapA[5] = 20;
	for (map<int, int>::iterator it = mapA.begin(); it != mapA.end(); it++)
		cout << "Key: " << it->first << "	Value: " << it->second << endl;

	//queue
	queue<int> queueA;
	queueA.push(4);
	queueA.push(6);
	queueA.push(8);
	cout <<"front of queueA: "<< queueA.front() << endl;
	queueA.pop();
	cout << "front of queueA: " << queueA.front() << endl;
	queueA.pop();
	cout << queueA.size() << endl;
	cout << queueA.front() << endl;


	//priority_queue
	priority_queue<int> priorityA;
	priorityA.push(2);
	priorityA.push(5);
	cout << priorityA.top()<<endl; //top of priority queue is the highest/largest element

	//stack
	stack<int> stackA;
	cout <<"Stack A is empty: " << stackA.empty()<<endl;
	stackA.push(5);
	stackA.push(7);
	cout << "Stack A recently added: " << stackA.top() << endl;
	stackA.push(8);
	cout << "Stack A recently added: " << stackA.top() << endl;
	stackA.pop();
	cout << "Stack A recently added: " << stackA.top() << endl;

	//set
	set<int> setA;
	setA.insert(8);

	//list
	list<int> listA;
	listA.push_back(5);
	listA.push_back(6);
	cout<< listA.front()<<endl;

	system("pause");
	return 0;
}