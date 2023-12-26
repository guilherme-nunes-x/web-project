//estudando javascript
console.log("isso é um console.log");
/*
formas de determinar variaveis em js
-> let
-> var
-> const
*/
let a, b, c;
a = 29;
b = 9;
c = a - b;
console.log(c);
//como exprimir mensagem no html
document.getElementById("nunes").innerHTML = c;

var valor1, valor2, total;
valor1 = 5;
valor2 = 15;
total = valor1 + valor2;
//alert(total);

var nota1, nota2, nota3, media, total, resultado;

nota1 = 4;
nota2 = 3;
nota3 = 3;
total = nota1 + nota2 + nota3;
media = total / 3;
//alert("sua media foi igual " + media);
resultado = media >= 3 ? "voçe está na media" : "voçe não estar na media";
//alert(resultado);

//teste com funções
function soma(valor1, valor2) {
  return valor1 + valor2;
}
//alert(soma(10, 10));
function alerta() {
  alert("hello world!");
}
//alerta();
const livro = {
  autor: "frederico",
  data: 2023,
  nome: "mil e uma noite na babilonia",
  informacoes: function () {
    return "o livro tem o titulo " + this.nome + " e o autor é " + this.autor;
  },
};
console.log(livro.informacoes());