function isPalindrome(num) {
    // let result = num.toString().split('').reverse().join('');
    let copyNum = num, reverseNum = 0;
    while (copyNum > 0) {
        const lastDigit = copyNum % 10;
        reverseNum = reverseNum * 10 + lastDigit;
        copyNum = Math.floor(copyNum / 10);
    }
    return num === reverseNum;
}
console.log(isPalindrome(1225));
