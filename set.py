even_num={24,67,89,70}
emp={1,'steve',9}
print(even_num)
print(emp)

s=set("hello")
print(s)

s=set((1,2,3,4,5))
print(s)

d={1:'one',2:'two'}
s=set(d)
print(s)  
print(d)

s=set()
s.add(10)
s.add(20)
print(s)
s.add('hi')
print(s)

# update 
a={10,20,30}
p={2,3,4}
a.update(p)
print(a)
print(p)
a.remove(10)
print(a)

# operations of set
# union
s1={1,2,3,4}
s2={4,5,67,78}
s1|s2
# s1={1,2,9,4}
# s2={4,5,67,78}
# set.union(s1|s2)

# intersection
s1={1,2,3,4}
s2={2,7,89,90}
s1&s2
set.intersection(s2&s1)

# difference
s1={1,2,3,4}
s2={2,7,89,90}
s2-s1
set.difference(s1-s2)

# symmetric difference
s1={1,2,3,4}
s2={2,7,89,90}
s2^s1
# set.symmetric_differnce(s2^s1)

s=set()
print(type(s))
e={}
print(type(e))
