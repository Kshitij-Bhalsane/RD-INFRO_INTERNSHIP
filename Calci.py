def calculator(num1, num2, operator):
    if operator == '1':
        return num1 + num2
    elif operator == '2':
        return num1 - num2
    elif operator == '3':
        return num1 * num2
    elif operator == '4':
        if num2 != 0:  #Exception Handling
            return num1 / num2
        else:
            return "Cannot divide by zero"
    else:
        print("\nInvalid operator")

ch = 'y'
print("Welcome to a Basic Arithmatic calculator : ")
while(ch == 'y' or ch == 'Y'):

    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
    operation = input("Select an operation \n1] Addition (+)\n2] Subtraction (-)\n3] Multiplication (*),\n4] Division (/) \nEnter Your Choice : ")
    result = calculator(num1, num2, operation)
    print("Result: ", result)
    ch = input("\n\nDo You Want to Continue? (y/n) : ")
print("\nThank you")
