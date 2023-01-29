#Wintersemester 2021/22
# Aufgabe 2
def Aufgabe2():
    import itertools
    #Angabe
    heim = set(["Andi", "Ben", "Carl", "Daniel"])
    gast = set(["Emil", "Finn", "Gerd", "Holger"])
    star = set(["Rafael"])
    #Lösung
    paare = set()
    for i in heim.union(star):
        for j in gast.union(star):
            if i != j:
                paare.add((i,j))
    
#Lösung vom Wieland: 
#    paare = set(tuple((h,g)) for h in heim | star for g in gast | star if h != g)
    
    #Test
    i = 1
    for p in sorted(paare):
        print(i, ": ", p)
        i = i + 1

def Aufgabe3():
    #Angabe
    from math import exp
    q = [ -1.7, -1.4, -0.3, -0.11, 0.2, 0.9, 1.0, 4.0, 17.0]
    #Lösung
    l = list(filter(lambda x: -1.0 < x < 1.0, q))
    l = list(map(lambda x: exp(-0.5 * x ** 2) , l))
    
    #Test
    print(l)

def Aufgabe4():
    class Regal:
        def __init__(self, anzahl):
            self._faecher = [None] * anzahl
        def __getitem__(self, idx):
            if 0 < idx < len(self._faecher):
                return self._faecher[idx]
        def __setitem__(self, idx, value):
            if 0 < idx < len(self._faecher):            
                self._faecher[idx] = value
        def __add__(self, value):
            self._faecher.append(value)
        def __str__(self):
            output = ""
            for i in range(len(self._faecher)):
                output += "Fach {}: {}\n".format(i, self._faecher[i])
            return output

    #Test
    r = Regal(3)
    r[1] = "Papier"
    print(r[1])
    r.__add__("Test")
    print(r)

#Sommersemester 2022

def Aufgabe2_():
    import itertools as ite
    l = list(ite.permutations((1,2,3,4), 3))
#   Lösung vom Wieland
#   l = [(i,j,k) for i in range(1,5) for j in range(1,5) if j != i for k in range(1,5) if (k != i and k != j)]
    print(l)

def Aufgabe3_():
    l = list(map(lambda x, y: [i for i in range(x, y) if i % 2 == 0], [1,3], [7, 9]))
#   Lösung vom Wieland
#   l = list(map(lambda x, y: [n for n in range(x, y+1) if n % 2 == 0], [1,3], [7, 9]))
    print(l)
def Aufgabe4_():
    class SparseVector:
        def __init__(self):
            self._vec = {}
        def __setitem__(self, idx, val):
            self._vec[idx] = val
        def __getitem__(self, idx):
            return self._vec.get(idx, 0.0)
#   Lösung vom Wieland
#    class SparseVector:
#        def __init__(self) :
#            self.__vec = {}
#        def __getitem__(self, index):   
#            try:
#                v = self.__vec[index]
#            except:
#                return 0.0
#            else:
#                return v 
#        def __setitem__(self, index, value):
#            self.__vec[index] = value
#
#for x in range(10, 20):
#   print("Wert[ ", x ," ] = ",v.__getitem__(x))
#   print(f"Wert[ {x} ] =  {v[x]}", end=", ")
    #Testskript
    v = SparseVector()
    v[11] = 3.14
    v[17] = 6.28
    for i in range(10, 20):
        print(f"Wert[ {i} ] = {v[i]}", end= ", ")
        
print(Aufgabe4_())