class Employee:
  empCount=0
  def __init__(shell,name,salary):
    shell.name=name
    shell.salary=salary
    Employee.empCount+=1
  def displayCount(shell):
    print("total employee %d"%Employee.empCount)
  def displayEmployee(shell):
    print("name:",shell.name,"salary:",shell.salary)
emp1=Employee("zara",2000)
emp2=Employee("mannu",5000)
emp1.displayEmployee()
emp2.displayEmployee()
print("total employee %d"%Employee.empCount)
