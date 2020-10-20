# Write a program in Python to allow users to enter an arithmetic expression and display the result!
a=int(input("Enter First Number : "))
b = int(input("Enter Second Number : "))
op = input("Enter operator : ")
if(op =='+'):
    print("The result is :",a+b)
elif(op =='-'):
    print("The result is :", a-b)
elif(op == '*'):
    print("The result is :", a*b)
elif(op == '/' and b!=0):
    print("The result is :", a/b)
elif(op == '%'):
    print("The result is :", a%b)
else:
    print("Invalid operator!!!!")
