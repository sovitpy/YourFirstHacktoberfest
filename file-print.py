# I want to print my lines from a file by python
# but i can't do that can you do??

file_path = input('Enter a file to read: ')

with open(file_path) as file_pointer:
    print(file_pointer.read())
