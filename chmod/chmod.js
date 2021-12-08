const {chmod} = require('fs').promises;
chmod(process.argv[2], process.argv[3]).then( res => console.log('done'),
                                              failure => console.log('failed \n'+ failure));
