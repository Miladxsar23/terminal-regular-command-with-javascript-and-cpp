#include <iostream>
#include <sys/types.h>
using namespace std;

string typeOfFile(int mode) {
	if(S_ISREG(mode)) {
		return "regular File";
	}else if(S_ISDIR(mode)) {
		return "directory File";
	}else {
		return "special File";
	}
}
