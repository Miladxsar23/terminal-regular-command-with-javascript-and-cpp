#include <iostream>
#include <sys/stat.h>
#include <string>
using namespace std; 

int main(int argc, char** argv) {
		if(chmod(argv[1], stoi(argv[2])) == 0){
			cout << "done!" << endl;
		}else {
			cout << "something wrong" << endl;
		}
	
	return 0;
}
