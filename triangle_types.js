var input = require('fs').readFileSync('stdin.txt', 'utf8');
var lines = input.split(' ');

for(var i = 0; i < lines.length; i++) {
	lines[i] = parseFloat(lines[i]);	
}

var [a, b, c] = [...lines];

if (a >= (b+c) || b >= (a+c) || c >= (a+b)) {
	console.log("NAO FORMA UM TRIANGULO");
} else if (a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b)) {
	console.log("TRIANGULO RETANGULO");
} else if (a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b)) {
	console.log("TRIANGULO OBTUSANGULO");
} else if (a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b)) {
	console.log("TRIANGULO ACUTANGULO");
}

if (a === b && b === c) {
	console.log("TRIANGULO EQUILATERO");
}
if ((a === b && a !== c) || (a === c && a !== b) || (b === c && b !== a) ) {
	console.log("TRIANGULO ISOSCELES");
}

