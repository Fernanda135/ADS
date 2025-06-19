nome = "Ana"
saldo = 1234.5678
idade = 29
codigo = 305419896

mensagem = "Cliente: %s\nSaldo: R$ %.2f\nIdade: %d anos\nCódigo de Identificação: %08X" % (
    nome, saldo, idade, codigo
)

print(mensagem)
