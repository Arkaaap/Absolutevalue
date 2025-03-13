# Q 3. In a certain code language “EASY” is written as “5117”. In the same code language, how will “BEAM” be written as




dict =  {'A':1,
    'B' :2 ,
    'C' : 3,
    'D' : 4,
    'E' : 5,
    'F' : 6 ,
    'G' : 7,
    'H' : 8,
    'I' : 9,
    'J' : 10,
    'K' :11,
    'L' : 12, 'M' : 13,'N' : 14,'O' : 15,'P' : 16,'Q' : 17,
    'R' : 18,
    'S' : 19,
    'T' : 20,
    'U' : 21,
    'V' : 22,
    'W' : 23,
    'X' : 24,
    'Y' : 25,
    'Z' : 26
}


c = (str)(input('Ener The string :'))

result = [dict[char] for char in c if char in dict] #This part of the expression tells Python to loop over each character char in the string c. For example, if c = "HELLO", this will loop through each of the characters 'H', 'E', 'L', 'L', 'O'.


print (f"{result}")
