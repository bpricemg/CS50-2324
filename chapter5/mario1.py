from cs50 import get_int

# Get height from the user
n = get_int("Height: ")

# Print the blocks horizontally
for i in range(n):
    print("#", end="")

# New line
print()
