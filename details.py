class student:
    def __init__(self):
        self.id =0
        self.name =" "
        self.total =" "
        self.per =0
    def __del__(self):
        print("object destroyed")
    def setdata(self):
        self.id =int(input("enter id: "))
        self.name = input("enter name: ")
        self.total = int(input("enter a marks: "))
        self.per = int(input("enter percentage: "))
    def showdata(self):
        print("id : ",self.id)
        print("name: ",self.name)
        print("marks: ",self.total)
        print("salary: ",self.per)
s = student()
s.setdata()
s.showdata()
