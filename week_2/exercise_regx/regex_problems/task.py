import re 

def dateReplace(date):

    return re.sub(r'(\d{4})-(\d{1,2})-(\d{1,2})','\\3-\\2-\\1',date)

print(dateReplace('2020-01-03'))

def findAll(string):

    return [(string[m.start(0):m.end(0)],m.start(0)) for m in re.finditer(r'[0-9]+',string)]

print(findAll('hello1234thernjkasd172jnhsda98712 8'))

def findAllFloats(string):
    
    return [(string[m.start(0):m.end(0)],m.start(0)) for m in re.finditer(r'[0-9]+.[0-9]+',string)]

print(findAllFloats('helo2.19289832ther hwasdasd 7 asdhhada 8.99'))

def snakeToCamel(match):

    return match.group(1)+match.group(2).upper()



def subToCamel(word):
   return re.sub(r'(.*?)_([a-zA-Z])',snakeToCamel,word,0)

print(subToCamel("snake_case_another"))


    


