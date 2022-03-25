# json

import json

x = {'id':1,'name':'Adam',"share":None,"valid":True}

with open('newfile.txt','a') as file:
    json.dump(x,file)

with open('two.json','r') as data:
    content = json.load(data)
    print(content['title'])