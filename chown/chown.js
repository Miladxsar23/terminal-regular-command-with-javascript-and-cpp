const {chown} = require('fs').promises;
async function changeOwner(path, uid, gid) {
        try {
                await chown(path, uid, gid)
        }catch(e) {
                throw e;
        }
        return "changed ownership is done";
}


changeOwner(process.argv[2], 
	Number(process.argv[3]), Number(process.argv[4])).then( res => console.log(res), 
															failure => console.log(failure))
