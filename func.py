class person:
    # __init__ it is used to make constructor 
    # self is used as this keyword but we can use any another keyword in place of self but it would be the 1st element.
    def __init__(pri,name,age):   
        pri.name=name
        pri.age=age
    def myfunc(pri):
        print("hello my name is "+pri.name)
p1=person("priyal",18)
print(p1.name)
print(p1.age)
p1.myfunc()
