function fibonacci(num) {
    let prev = 0, curr = 1, next;
    console.log(prev);
    console.log(curr);
    if (num > 2) {
        for (let i = 2; i <= num-1; i++) {
            next = prev + curr;
            console.log(next);
            prev = curr;
            curr = next;
        }
        return next;  
    }
    
}
let result = fibonacci(5);
