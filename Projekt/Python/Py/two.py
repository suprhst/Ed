# Json

import json

with open('two.json','r',encoding="utf-8") as json_file:
    content = json.load(json_file)
    print(content) 
    print(content["title"])
    print(content["Budget"])
    print(type(content))

x = {'id':1,'name':'Adam',"share":None,"valid":True}

with open('one.txt','a',encoding='utf-8') as file:
    json.dump(x,file)
    