const fs = require('fs');
const path = require('path');

const dir= path.join(__dirname,'../Other-Practice')
// const dir= path.join('D:/CODING/C/Tutorial-Practice')

fs.readdir(dir,(_,files)=>{
    files.forEach((v)=>{
        if(v.includes('.exe')){
            fs.rm(dir+"/"+v,(err)=>{
             if(err){
                console.log(err)
             }else{
                console.log('file delted')
             }
            })
        }
    })
})


console.log(dir)