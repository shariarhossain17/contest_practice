function primeFactors(n) {
    let flag = true;

    while (n % 2 === 0) {
        flag = true;
        n = n / 2;
    }

    for (let i = 3; i <= Math.sqrt(n); i = i + 2) {
        while (n % i === 0) {
            n = n / i;
            flag = false;
        }
    }

    if (n > 2) {
        flag = false;
    }

    if (flag) {
        console.log("Bob");
    } else {
        console.log("Alice");
    }
}


primeFactors(5); 