/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let result = 0,
		min = Infinity;
	prices.forEach((price) => {
		if (price < min) min = price;
		else if (price - min > result) result = price - min;
	});
	return result;
};