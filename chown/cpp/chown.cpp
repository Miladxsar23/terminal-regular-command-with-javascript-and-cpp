#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <string>
using namespace std; 

int main(int argc, char** argv) {
        gid_t g =stoi(argv[2]);
        uid_t u = stoi(argv[3]);

        if(chown(argv[1], u, g) == 0 ){
                cout << "ownership of file " << argv[1] << " is changed!" << endd
l;
        }else {
                cout << "something wrong" << endl;
        }
        return 0;
}
