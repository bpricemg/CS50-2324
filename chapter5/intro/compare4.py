from cs50 import get_string

s = get_string("Do you agree? ")

# Convert to lower case
s = s.lower()

if "y" in s:
    print("yes")
elif "n" in s:
    print("no")
