# dissimilar datatype store karta hai tuple but item cannot modify
# t=(1,2,'python',tuple(),(42,'hi'));
tuple=(1,2,3,4,'hi','class');
print(tuple);

# concating
t1=(1,2,3,4)
t2=('hi','java')
print(t1+t2)

# append cannot used because turple cannot modify
# t1.append(45)
# print(t1)

# repeat
t=("hello",)*5
print(t)

# nesting turple
t1=(1,2,3,4)
t2=(5,6,7,8)
t3=(t1,t2)
print(t3)

# slicing
a=(8,3,6,9,45,78,90)
print(a[1:])
print(a[::-1])
print(a[2:4])
print(a[-4:-2])

# lenght 
t=('a','b','c','d','1',);
print(len(t))

# dictionaries
dict={'color':'blue','id':5}
print(dict)
print(dict['id'])
print(dict['color'])

# dublicated value doesnot allowed
d1={'brand':'ford','model':'mustang','year':1456,'year':1490}
print(d1)
print(len(d1))
print((type(d1)))

x=d1["model"]
print(x)
x=d1.get("model")
print(x)

x=d1.keys()
print(x)

x=d1.values()
print(x)

x=d1.items()
print(x)

d2={'brand':'ford','model':'mustang','year':1456,'color':'blue'}
print(d2)
if "car" in d2:
    print("yes")
else:
    print("no")

d2={'brand':'ford','model':'mustang','year':1456,'color':'blue'}
d2['color']='white'
print(d2)

d2["price"]=20000
print(d2)
d2.update({"color":"red"})
print(d2)

d2.pop("model")
print(d2)
d2.popitem
print(d2)
