function sum(num) {
    let count = 0;
    for (let i = 1; i <= num; i++){
        count += i;
    }
    return count;
}
let result = sum(5);
console.log(result);
