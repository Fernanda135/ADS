// Entrada
// A entrada é composta por um único inteiro N (0 < N ≤ 106) representando quantos "Ho" serão falados por Noel.

// Saída
// A saída é composta por todos "Ho" que Papai Noel deve falar separados por um espaço. Após o último "Ho" deve ser apresentado um "!" encerrando o programa.

const n = Number(prompt())

let resultado = 'Ho '.repeat(n).trim() + '!'

console.log(resultado)