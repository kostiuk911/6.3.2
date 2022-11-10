#include<iostream>
using namespace std;

int Search(int* arr, int size , int i) {


			cout << "[" << arr[i] << "]";
		if (i < size - 1)
			return Search(arr, size, i + 1);
		else
			cout << endl;
	
}
int Min(int* arr, int size , int i) {
	int min = arr[0];
	if (arr[i] < min)
		min = arr[i];
	if (i < size - 1)
		return min;
		
	else
		return Min(arr, size,  i + 1);
	
}


int main() {

	const int size = 20;
	int arr[size] = { 1,43,21,4,2,6,23,5,29,58,6,5,89,3,2,66,25,34,45 };
	Search(arr, size ,0);
	cout << endl;

			cout << "min = " << Min(arr, size, 0) << endl;

}