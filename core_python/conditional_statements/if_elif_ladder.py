score = 101

if score <= 100 and score >= 0:
    if score >= 80:
        print("First class")
    elif score >= 60:
        print("Second class")
    elif score >= 40:
        print("Third class")
    else:
        print("Sorry, You are failed") 
else:
    print("Invalid score!\nPlease enter your score between 0 to 100")

