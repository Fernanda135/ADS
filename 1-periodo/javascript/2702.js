// Escolha Difícil
// Entrada
// A primeira linha contem três inteiros Ca, Ba e Pa (0 ≤ Ca, Ba, Pa ≤ 100), representando respectivamente o número de refeições disponiveis de frango, bife e massa. A segunda linha contem três inteiros Cr, Br e Pr (0 ≤ Cr, Br, Pr ≤ 100), indicando respectivamente o número de refeições requisitadas de frango, bife e massa respectivamente.

// Saída
// Imprima uma única linha com um inteiro representando o número de passageiros que seguramente não receberão sua escolha de refeição.

let num = parseInt(prompt())

let soma = 0

while(num >= 10) {
    let resto = num % 10
    soma += resto
    num = num / 10
}

soma += num

console.log(soma)