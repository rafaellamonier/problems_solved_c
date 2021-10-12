function randomiza(n) { 
	var ranNum;
	vetor = [];
	for(let i = 0; i < 1000; i++){
		ranNum = Math.round(Math.random()*n);
		vetor.push(ranNum);
	}
	return vetor;
}

function sort(vetor){
	var temp;
	for(let k=0; k<vetor.length; k++){
		for(let h=0; h<vetor.length; h++){
			if(vetor[k]<vetor[h]){
				temp = vetor[k];
				vetor[k] = vetor[h];
				vetor[h] = temp;
			}
		}
	}
	return vetor;
}

var vetor1 = randomiza(100);
var vetor2 = randomiza(100);

// before 
console.log("Vetores antes de serem ordenados:");
console.log(vetor1);
//console.log(vetor2);
console.log("\n");


// after
console.log("Vetores ordenados: ");
console.log(sort(vetor1));
// console.log(sort(vetor2));
console.log("\n");

