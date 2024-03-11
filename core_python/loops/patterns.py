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


# num = 5
# for row in range(1, num+1):
#     for col in range(1, num+1):
#         if col >= row:
#             print(" *", end='')
#         else:
#             print("  ", end='')
#     print()

# *
# **
# ***
# ****
# *****
# for row in range(1, 6):
#     # print(row)
#     for col in range(row):
#         print("*", end='')
#     print()

# for row in range(1, 6):
#     for col in range(1, 6):
#         if (row == 1) and (col == 1):
#             print(' ', end ='')
#             continue
#         if (row == 1) and (col == 5):
#             print(' ', end ='')
#             continue
#         if row ==1 or col == 1 or row == 3 or col ==5:
#             print("*", end ='')
#         else:
#             print(' ', end ='')
#     print()

# for raw in range(7):
#     print(raw)
#     for col in range(7):
#         if (col == 1 and raw != 0 and raw != 7 - 1) or ((raw == 0 or raw == 7 - 1) and col > 1 and col < 7 - 2) or (raw == ((7 - 1) // 2) and col > 2 and col < 7 - 1) or (col == 7 - 2 and raw != 0 and raw >= ((7 - 1) // 2) and raw != 7 - 1):
#             print(" *", end='')
#         else:
#             print("  ",end='')
#     print()

# for raw in range(1,6):
#     for col in range(1,6):
#         if (raw <= 1 and col >= 2 and col<= 4) or (col == 1 and raw >= 2 and raw <= 4) or (col == 5 and raw >= 3 and raw <= 4) or raw == 3 and col >= 3 or (raw == 5 and col >= 2 and col <= 4):
#             print(" *", end='')
#         else:
#             print("  ", end='')
#     print()