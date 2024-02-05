#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void SortVector(vector<int>& myVec) {
	sort(myVec.begin(), myVec.end(), greater<int>());
}

int main() {
	vector<int> myVec;
	int num;
	int vecSize;

	cin >> vecSize;


	for (int i=0; i < vecSize; ++i) {
		cin >> num;
		myVec.push_back(num);
	}

	SortVector(myVec);

	for (int i=0; i < myVec.size(); ++i){
		cout << myVec[i] << ",";
	}

	cout << endl;

	return 0;
}


