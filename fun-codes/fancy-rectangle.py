height = int(input("Enter the height of the rectangle : "))
width = int(input("Enter the width of the rectangle : "))

combinations = 0
for x in range(1, height+1):
    y = width
    while y:
        combinations = combinations + x * y
        y = y - 1

print("Possible Combinations of Fancy Rectangles are : " + str(combinations))
