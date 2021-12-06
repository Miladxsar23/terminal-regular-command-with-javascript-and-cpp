# terminal-regular-command-with-javascript-and-cpp
I have decided to run all the Linux terminal commands in JavaScript and c++, so stay tuned.

# Prerequisties
* install node
* instal g++ compiler

# Usage 
command | Description | js example | c++ example 
--- | --- | --- | --- |
stat <fileName> | These functions return information about a file(from inode) | node stat.js exampleFile.txt | ./stat.exe exampleFile.txt
chown <fileName> <uid> <gid>  | change ownership of files | node chown.js exampleFile.txt 2001 2001 | ./chwon.exe exampleFile.txt 2001 2001 (just unix systems)
permission <filePath> | get file permissions | node permission.js exampleFile.txt (jsut unix system)| ./permission.exe exampleFile.txt (just unix systems)
  
## Contributing
As I use this for my own projects, I know this might not be the perfect approach
for all the projects out there. If you have any ideas, just
[open an issue](https://github.com/Miladxsar23/terminal-regular-command-with-javascript-and-cpp/issues/new) and tell me what you think.

If you'd like to contribute, please fork the repository and make changes as
you'd like. Pull requests are warmly welcome.

## Licensing
This project is licensed under MIT license.

## Contact
* email: milad.xsar72@gmail.com
