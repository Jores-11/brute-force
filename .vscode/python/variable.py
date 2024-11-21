#year=2024
#print("We are in",year)
#print(year)
#month = " Nov"
#print("We are in" + month)

#name="will"
#surname="hermas"
#print(name,surname)

"""print("My name is hermas")
print("We are in 2024")
print("print(we are in+30)")
"""

"""mangoP=1000

bananaP=1500

mangoQ=3
bananaQ=5

print(mangoP*mangoQ + bananaP*bananaQ)"""

#CONDITIONS

"""year=int(input("ENTER A LEAP YEAR: "))

if year%4==0 and year%100!=0:
    print("This is a leap year")
else:
    print("This is not a leap year")""" 


#CALCULATOR 

def add(x , y):
    return x + y

def subtract(x , y):
    return x - y

def multiply(x , y):
    return x * y

def divide(x ,y):
    if y !=0:
        return x / y
    else:
        return "Error! Division by zero"

print("Select an operation")
print("1. Add")
print("2. Subtract")
print("3. Multiply")
print("4. Divide")
print("5. Exit")
    
choice = input("Enter your choice (1/2/3/4/5): ")

if choice in ('1', '2','3','4','5'):
    
        num1 = float(input("Enter a first number: "))
        num2 = float(input("Enter a second number: "))
        
        if choice == '1':
            print("Result:", add(num1,num2))
        elif choice == '2':
            print("Result:", subtract(num1,num2))
        elif choice == '3':
            print("Result:", multiply(num1,num2))
        elif choice == '4':
            print("Result:", divide(num1,num2))
        elif choice == '5':
            print("Result:", exit(num1,num2))
    
else:
    print("Invalid choice! Please select a valid operation")