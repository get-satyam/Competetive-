import sys
dict={}
n = input()
n = int(n)
for x in range(n):
    data = input().split(" ")
    dict[data[0]] = data[1]

b = sys.stdin.readlines()
for i in b:
    name = i.strip()    
    if name in dict:
        print(name+ '=' + str( dict[name] ))
    else:
    print('Not found')