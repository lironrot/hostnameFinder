import os

myhost = os.uname()[1]
print(type(myhost))
print(myhost)
ty = str(type(myhost))
print("The hostname is {} {}".format(myhost, ty))