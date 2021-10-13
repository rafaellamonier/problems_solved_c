var input = require("fs").readFileSync("stdin.txt", "utf8");
var lines = input.split("\n");

var count = 0;
while(count < lines.length) {
	lines[count] = parseInt(lines[count])	
	count++;
}

var a, b, c, temp;
var vetor = [];
var temp;

[a, b, c] = [...lines];

vetor[0] = a;
vetor[1] = b;
vetor[2] = c;

for (var i = 0; i < vetor.length; i++) {
	for (var j = 0; j < vetor.length; j++) {
		if (vetor[i] < vetor[j]) {
			temp = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = temp;
		}
	}
}

console.log("Vetor não ordenado: \n");
console.log(a, b, c);

console.log("Vetor ordenado: \n");
console.log(vetor[0], vetor[1], vetor[2]);
