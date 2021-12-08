#include <iostream>
#include <sys/stat.h>
#include <string>
#include <sys/types.h>
using namespace std;

int main(int argc, char** argv) {
        int res = chmod(argv[1], stoi(argv[2]));
        if(res != 0 ){
                cout << errno << endl;
        }else {
                cout << "done" << endl;
        }
        return 0;
}
