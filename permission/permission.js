const {stat} = require('fs').promises;
const {constants} = require('fs');
async function getPerm(filePath) {
        let statObj;
        let perm = [];
        try {
                let {mode} = await stat(filePath);
		if(!constants.S_IRUSR) throw "just work in unix systems";
                (mode & constants.S_IRUSR) ? perm.push('r') : perm.push('-');
                (mode & constants.S_IWUSR) ? perm.push('w') : perm.push('-');
                (mode & constants.S_IXUSR) ? perm.push('x') : perm.push('-');
                (mode & constants.S_IRGRP) ? perm.push('r') : perm.push('-');
                (mode & constants.S_IWGRP) ? perm.push('w') : perm.push('-');
                (mode & constants.S_IXGRP) ? perm.push('x') : perm.push('-');
                (mode & constants.S_IROTH) ? perm.push('r') : perm.push('-');
                (mode & constants.S_IWOTH) ? perm.push('w') : perm.push('-');
                (mode & constants.S_IXOTH) ? perm.push('x') : perm.push('-');
        }catch(e) {
                throw e;
        }

        return perm.join('');
}
getPerm(process.argv[2]).then(res => console.log(res), failure => console.log(failure));
