#defining the class and object
class Person:
    id = []
    name = []
    age = []
    weight = []
    def __init__(self, line):
        self.id.append(int(line[0]))
        self.name.append(line[1])
        self.age.append(int(line[2]))
        self.weight.append(int(line[3])) 
people = Person

data_sheet = open('Data.csv', 'r')

#storing the raw information into lists
i = 0
for line in data_sheet:
    if i == 0:
        i += 1
        continue
    line = line.split(",")
    people(line)
data_sheet.close()

#computing minimum, maximum, and average age
maximum_age = max(people.age)
print('The maximum ages is : ', maximum_age)
minimum_age = min(people.age)
print('The minimum ages is : ', minimum_age)
average_age = sum(people.age)/len(people.age)
print('The average ages is : ', average_age, '\n')

#Output section
print('This is the raw data taken from the sheet :')
i = 0
for i in people.id:
    print('Person ' + str(people.id[i-1]) + ' is '
    + people.name[i-1] + ', ' + str(people.age[i-1]) + ' years old, '
    + 'his weight is: ' + str(people.weight[i-1]) + 'Kg')
