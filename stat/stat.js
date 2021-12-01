const {stat} = require('fs').promises;

async function getMetaData(filePath) {
	let metaData;
	try {
		metaData = await stat(filePath);
	}catch(err){
		if(err.code === "ENOENT") return "file not exist"
		else throw err
	}
	return metaData;
}
getMetaData(process.argv[2]).then( resolve => console.log(resolve), failure => console.log(failure));
