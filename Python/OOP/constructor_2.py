class person:
    def __init__(self, fname, lname, age):
        self.fname = fname
        self.lname = lname
        self.age = age

        print(self.fname, self.lname, self.age)

asif = person("asif","mohammed",25)
sifat = person("mohammed","sifat",27)

print(asif.fname,sifat.lname,asif.age,sifat.age)

