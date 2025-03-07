#include <iostream>
using namespace std;
int main() {
	
	while(1){
		cout << "please enter your name:" << endl;
		char name[15];
		cin.getline(name, 15);
		cout << "your name have " << strlen(name) << " words" << endl;
		cin.get();
	}
	return 0;
}