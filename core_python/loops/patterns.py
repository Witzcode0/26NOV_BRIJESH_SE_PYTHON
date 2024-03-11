# * * * - -
# * * * - -
# * * * - -
# - - - - -
# - - - - -

# num = 5
# for row in range(1, num+1):
#     for col in range(1, num+1):
#         if col <= 3 and row <= 3:
#             print('* ', end='')
#         else:
#             print("- ",end='')
#     print()

# * - - - -
# - * - - -
# - - * - -
# - - - * -
# - - - - *

# num = 5
# for row in range(1, num+1):
#     for col in range(1, num+1):
#         if row == col:
#             print('* ', end='')
#         else:
#             print("- ",end='')
#     print()

# a - - - -
# - b - - -
# - - c - -
# - - - d -
# - - - - e

# num = 5
# for row in range(1, num+1):
#     for col in range(1, num+1):
#         if row == col:
#             print(chr(96 + col), end='')
#         else:
#             print("- ",end='')
#     print()

# a
#   b
#     c
#       d
#         e

# num = 5
# for row in range(1, num+1):
#     for col in range(1, num+1):
#         if row == col:
#             print('%c '%(chr(96 + col)), end='')
#         else:
#             print("  ",end='')
#     print()


num = 5
for row in range(1, num+1):
    for col in range(1, num+1):
        if col >= row:
            print(" *", end='')
        else:
            print("  ", end='')
    print()
