# check square of numbers values is just an variable we can use anything in that place
s1=[1,2,3,4,5]
square=0
squares=[]
for values in s1:
    square = values**2
    squares.append(square)
    print("the list of squares is",squares)
    # print statement should be out of loop to print in single line
print("the list of squares is",squares)
