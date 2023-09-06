#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	int numbers[] = {5,4,3,2,1};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	
	sort(numbers, numbers + size);
	
	for(int i = 0; i < size; i++){
		cout<<numbers[i]<<" ";
	}
	cout<<endl;
	return 0;
}
