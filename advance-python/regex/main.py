import re

# print(r"brijesh go\ndaliya")

# data = "map moon mat cat bat fat mood m mm mmm mmmm"
# pattern = r"\bm\w*\b"

# # result = re.search(pattern, data)
# result = re.findall(pattern, data)

# print(result)

# data = "tryuetryre 23-12-1996 1-1-1997 jhdskj ,ugdkmyc"
# pattern = r"\b\d{1,2}-\d{1,2}-\d{4}\b"
# result = re.findall(pattern, data)

# print(result)



# txt = "TheHI rain in Spain ghg"
# x = re.search("\s", txt)

# print("The first white-space character is located in position:", x.start()) 



# txt = "The rain in Spain"
# x = re.split("\s", txt)
# print(x)


# txt = "The rain in Spain"
# x = re.sub("\s", "9", txt)
# print(x)


# email_pattern = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b'

# # Example usage
# emails = [
#     "user@example.com",
#     "another.user@subdomain.example.co.uk",
#     "user123@gmail.com",
#     "user-123@example.domain"
# ]

# for email in emails:
#     if re.match(email_pattern, email):
#         print(f"{email} is a valid email address.")
#     else:
#         print(f"{email} is not a valid email address.")



# phone_pattern = r'^\+(?:[0-9] ?){6,14}[0-9]$'

# # Example usage
# phone_numbers = [
#     "+1234567890",
#     "+1 234 567 8901",
#     "+12 34567890123",
#     "+123456789012345",
#     "+12345"
# ]

# for phone_number in phone_numbers:
#     if re.match(phone_pattern, phone_number):
#         print(f"{phone_number} is a valid phone number.")
#     else:
#         print(f"{phone_number} is not a valid phone number.")
