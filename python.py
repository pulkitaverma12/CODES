print("hello")

x=5
y="priyal"
z='krishna'
print(x)
print(y)
print(z)

x=str(3)
y=int(3)
z=float(3)
print(x)
print(y)
print(z)

a=4
A='akshita'
print(a)
print(A)

x,y,z="orange","banana","cherry"
print(x)
print(y)
print(z)

x=y=z="shreyansh"
print(x)
print(y)
print(z)

# conditional statement
# add two number
a=int(input("enter the 1st number:"))
b=int(input("enter the 2st number:"))
print(a+b)

# if block
num=int(input("enter the number:"))
if(num%2==0):
    print("number is even")

# largest number
num1=int(input("enter 1st number:"))
num2=int(input("enter 2st number:"))
num3=int(input("enter 3st number:"))
if(num1>num2 and num1>num3):
    print("a is largest")
if(num2>num1 and num2>num3):
    print("b is largest")
if(num3>num2 and num3>num1):
    print("c is largest")

# datatye
a="data"
print(type(a))
b=1
print(type(b))
c=9.6
print(type(c))
d=True
print(type(d))
e=7+2j
print(type(e))

# auto typecasting
3+2.4
True+6+7.5

int(7.3)+3

# two number is positive or negative
a=-1
b=-13
if(a>0 and b>0):
    print("a is positive")
elif(a<0 and b<0):
    print("b is negative")
else:
    print("invalid") 
