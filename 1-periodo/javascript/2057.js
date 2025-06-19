// Fuso Horário
// Entrada
// A entrada contém 3 inteiros: S (0 ≤ S ≤ 23), T (1 ≤ T ≤ 12) e F (-5 ≤ F ≤ 5), separados por um espaço, indicando respectivamente a hora da saída, o tempo de viagem e o fuso horário do destino com relação à origem.

// Saída
// Imprima um inteiro que indica a hora local prevista no destino, conforme os exemplos abaixo.

const entrada = prompt()
let [saida, duracao, fuso] = entrada.split(' ')

saida = parseInt(saida)
duracao = parseInt(duracao)
fuso = parseInt(fuso)

if(saida === 0) {
    saida = 24
}

let destino = saida + duracao + fuso

if(destino > 23) {
    destino -= 24
}

console.log(destino)