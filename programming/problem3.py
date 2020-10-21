# "File Writing!"

# Write a program in Python to write the string from user input to "hello.txt"!
str=input("Enter data to be inserted in hello.txt : ")
fhand=open('hello.txt','a+')
fhand.write("\n{}".format(str))
fhand.close()