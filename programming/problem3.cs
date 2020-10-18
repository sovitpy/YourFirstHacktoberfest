// "File Writing!"

// Write a program in C# to write the string from user input to "hello.txt"!


string folder = @"C:\Temp\";  
// Filename  
string fileName = "hello.txt";  

string fullPath = folder + fileName;  
 
string input =  Console.ReadLine();
 
File.WriteAllLines(fullPath, input);  
