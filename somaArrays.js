class Solution {
	game_with_number(arr, n) {
		var soma = 0;
		for(var i=0; i<n; i++) {
			soma += arr[i];
		}

		return soma;
	}
}

var teste1 = new Solution();
// teste 1:
console.log(teste1.game_with_number([1, 2, 3, 4], 4));
// teste 2:
console.log(teste1.game_with_number([5, 8, 3, 10, 22, 45], 6));


