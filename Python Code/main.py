class Person:
    id = []
    name = []
    age = []
    weight = []

    def __init__(self, id, name, age, weight):
        self.id.append(id)
        self.name.append(name)
        self.age.append(age)
        self.weight.append(weight)
        
people = Person

data_sheet = open('Python\Data.csv', 'r')

#storing the raw information into lists
i = 0
for line in data_sheet:
    if i == 0:
        i += 1
        continue
    line = line.split(",")
    people(int(line[0]), line[1], int(line[2]), int(line[3]))
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
