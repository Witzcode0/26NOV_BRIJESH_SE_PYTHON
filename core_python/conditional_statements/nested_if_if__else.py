age = int(input("Enter your age: "))

if age >= 18:
    weight = float(input("Enter your weight: "))
    if weight >= 50:
        print("You can donate")
    else:
        print("You can not donate")
else:
    print("You can not donate")