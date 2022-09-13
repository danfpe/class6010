#include <iostream>
#include <vector>

struct MyVector {
	double* data;
	int size;
	int capacity;
};

double arrayModSum(MyVector& sumVector, int size) {
	double sum = 0.0;
	for(int i = 0; i < size; i++) {
		++sumVector.data[i];
		sum += sumVector.data[i];
	}
	return sum;
}

void growMyVector(MyVector& growVar) {
	if (growVar.size == growVar.capacity){
		double * tempArray = new double [2 * growVar.size];
		for(int i = 0; i < growVar.size; i++) {
			tempArray[i] = growVar.data[i];
		}

		delete [ ] growVar.data;
		growVar.data = tempArray;
		growVar.capacity = 2 * growVar.size;
		tempArray = nullptr;
	}
}

int main() {
	MyVector vec1;
	vec1.size = 10;
	vec1.data = new double [5];
	vec1.size = 5;
	vec1.capacity = vec1.size;

	for(int i = 0; i < vec1.size; i++) {
		vec1.data[i] = 1.0;
	}

	std::cout << arrayModSum(vec1, vec1.size) << "\n";

	// Part 2
	int original_size = vec1.size;
	growMyVector(vec1);
	for(int i = original_size; i< vec1.capacity; i++) {
		vec1.data[i] = -1.0;
		std::cout << vec1.data[i] << "\n";
	}
	
	std::cout << vec1.capacity << "\n";
	
}

