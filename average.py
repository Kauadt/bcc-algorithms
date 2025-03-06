# # Pedir um número em python
# s = input("Digite um número: ")

# # Converter a entrada para int
# n = int(s)
# p = n * n

# # Printa para o usuário
# print(s, "ao quadrado é: ", p)

soma = 0
for n in range(2):
    soma += float(input("Digite a nota {}: ".format(n + 1)))
else: 
    print("A média é", soma/2)

'''
n1 = int(input("Digite um número: "))
n2 = int(input("Digite outro número: "))
media = (n1 + n2) / 2
print("A média é", media) 

'''
