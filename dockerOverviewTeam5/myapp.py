import os

print("\n\n-----------------------------")
print("Hello everbody!!! I'm myapp")
myvar = os.getenv('MY_VAR')

f = open("myresult.txt", "a")
mystr = "Hello!! \n"
if myvar is None:
    mystr += "Env var not found"
else:
    mystr += "The variable values " + myvar

mystr += "\n"
f.write(mystr)
f.close()
