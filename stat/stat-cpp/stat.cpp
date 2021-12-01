#include <iostream>
#include <sys/stat.h>

using namespace std;

int main(int argc, char** argv) {
	struct stat stbuf;
	if( stat(argv[1], &stbuf) == 0 ) {
		cout << argv[1]<< endl;
		cout << "dev : " << stbuf.st_dev << endl;
		cout << "inumber : " << stbuf.st_ino << endl;
		cout << "mode : " << stbuf.st_mode << endl;
		cout << "hardlink : " << stbuf.st_nlink << endl;
		cout << "uid : " << stbuf.st_uid << endl;
		cout << "gid : " << stbuf.st_gid << endl;
		cout << "size : " << stbuf.st_size << endl;
		cout << "block size : " << stbuf.st_size << endl;
		cout << "aTime : " << stbuf.st_atime << endl;
		cout << "mTime : " << stbuf.st_mtime << endl;
		cout << "cTime : " << stbuf.st_ctime << endl;
	}
	return 0;
}
