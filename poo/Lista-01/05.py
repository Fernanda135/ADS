n = int(input('número:'))

binario = ""

if n == 0:
    binario = "0"
else:
    while n > 0:
        binario = str(n % 2) + binario
        n = n // 2

print("Binário:", binario)