#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int numbers[] = {5,4,3,2,1};
	int num = sizeof(numbers) / sizeof(numbers[0]);
	
	cout<<num<<endl;
	
	return 0;
}
