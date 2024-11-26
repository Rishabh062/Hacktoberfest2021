# file handling
#open('file_path','mods')
'''different mods
x-create
r-read
a-append
w-write
r+ -read/write'''

f1=open('demo.txt','x')

f1=open('demo.txt','r')
print(f1.read())

f1=open('demo.txt','a')
f1.write('\nMy age is 18')
f1.close()

f1=open('demo.txt','w')#old text will be overwritten
f1.write('Dipti the great')
f1.close()

with open('demo.txt','w') as f1:# using this we don't need to close the file
    f1.write('Ayushi Agarwal')

f1=open('demo.txt','r+')#if file does not exist then it will show error
print(f1.read())
f1.write("Ayush")
f1.close()

import os 
print(os.getcwd())#display ur current directory
#os.mkdir("newfolder")# make new folder

# if we want to create the folder in specific directory then we need to mention full path
#os.mkdir(r'c:\udemu\newfolder')

# to check if a file exist in the directory or not
print(os.path.exists('demo.txt'))

os.remove('demo.txt')# to delete the file
print(dir(os))