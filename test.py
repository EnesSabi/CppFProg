class Regal :
    def __init__(self, anzahl) :
        self._faecher = [None] * anzahl
    def __getitem__(self, index):
        if index < 0 or index >= len(self._faecher):
            print("Index out of bounds ")
        else:
            return self._faecher[index]
    def __setitem__(self, index, value):
        if index < 0 or index >= len(self._faecher):
            print("Index out of bounds ")
        else:
            self._faecher[index] = value
    def __add__(self, other):
        self._faecher.append(other)
    def __str__(self):
        output = ""
        for i in range(len(self._faecher)):
            output += "Fach {}: {}\n".format(i, self._faecher[i])
            return output

r = Regal(3)
r[1] = "Papier"
print(r[1])
r.__add__("Test")
print(r)