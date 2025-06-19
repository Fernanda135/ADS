preco = 5.0
custo_fixo = 200

lucro_maximo = 0
melhor_preco = 0
quant = 0

print("Preço do Ingresso | Quantidade Vendida | Lucro")
print("-----------------------------------------------")

while preco >= 1.0:
    qtd = 120 + int((5.0 - preco) / 0.5) * 26
    lucro = (preco * qtd) - custo_fixo

    print(f"     R$ {preco:.2f}      |        {qtd}         | R$ {lucro:.2f}")

    if lucro > lucro_maximo:
        lucro_maximo = lucro
        melhor_preco = preco
        quant = qtd

    preco -= 0.5

print("\nLucro máximo esperado:")
print(f"R$ {lucro_maximo:.2f} com ingresso a R$ {melhor_preco:.2f} e {quant} ingressos vendidos.")