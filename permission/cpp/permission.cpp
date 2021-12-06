 #include <iostream>
 #include <sys/stat.h>
 #include <sys/types.h>
 #include <fcntl.h>
 using namespace std;
 int permSize = sizeof("rwxrwxrwx");
 char* filePermStr(int mode) {
    char* strx = new char[permSize];
    strx[0] = (mode & S_IRUSR) ? 'r' : '-';
    strx[1] = (mode & S_IWUSR) ? 'w' : '-';
    strx[2] = (mode & S_IXUSR) ? 'x' : '-';

    strx[3] = (mode & S_IRGRP) ? 'r' : '-';
    strx[4] = (mode & S_IWGRP) ? 'w' : '-';
    strx[5] = (mode & S_IXGRP) ? 'x' : '-';

    strx[6] = (mode & S_IROTH) ? 'r' : '-';
    strx[7] = (mode & S_IWOTH) ? 'w' : '-';
    strx[8] = (mode & S_IXOTH) ? 'x' : '-';
    return strx;
  }

  int main(int argc, char** argv) {
     struct  stat statBuf;
     char* st;
      if(stat(argv[1], &statBuf) == 0 ) {
        st = filePermStr(statBuf.st_mode);
        cout << st << endl;
      }
      return 0;
 }
