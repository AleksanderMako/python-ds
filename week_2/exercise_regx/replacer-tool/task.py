import argparse
import os 
class CmdApp:

    def __init__(self):
        self.content =''
        self.f =''
        self.to =''
        self.out =''
        self.force = False
        self.filename =''
        self.fileExtensions =''
    
    def setUpCli(self):
        parser = argparse.ArgumentParser(description='renamer')
        parser.add_argument('filename')
        parser.add_argument('-f','--from',default=',')
        parser.add_argument('-t','--to',default=',')
        parser.add_argument('-o','--out',default=',')
        parser.add_argument('-fo','--force',type=bool)
        args = vars(parser.parse_args())
        self.f = args['from']
        self.to = args['to']
        self.out = args['out']
        self.force = args['force']
        self.filename = args['filename']

    def act(self):
        self.readFile(self.filename)
        self.writeToFile(self.filename,self.findReplace(self.content,self.f,self.to))

    def readFile(self,filepath):
        with open(filepath)as file:
            self.content = file.read()

    def findReplace(self,content, old , new):
        self.content = self.content.replace(old,new)
        return self.content

    def writeToFile(self,filename, content):
        fileList = filename.split('.')
        newFileName =fileList[0]+'_mod.'+fileList[1] 

        if os.path.isfile(newFileName) and not self.force:
            print('File already exists use --force to overwrite')
            exit(1)
        file  = open(newFileName,'w+')
        file.write(content)
        file.close()
        

obj = CmdApp()
obj.setUpCli()
obj.act()