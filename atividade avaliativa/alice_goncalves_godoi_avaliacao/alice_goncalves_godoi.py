nume1 = input("digite um numero inteiro não nulo: ")
nume2 = input("digite outro numero inteiro não nulo: ")

print("soma: ", int(nume1) + int(nume2))
print("diferença: ", int(nume1) - int(nume2))
print("media: ", (int(nume1) + int(nume2)) / 2)
if int(nume1) >= int(nume2):
    print("resto", int(nume1) % int(nume2))
else:
    print("resto", int(nume2) % int(nume1))
