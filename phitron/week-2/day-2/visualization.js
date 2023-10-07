

function is_prime( num)
{
    if (num <= 1)
    {
        return false;
    }
    for (let i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

function main()
{
    let n =10;

    let ans = 0;
    for (let i = 1; i <= n; i++)
    {
        let prime_divisors = 0;

        for (let j = 2; j <= n; j++)
        {
            if (i % j == 0 && is_prime(j))
            {
                prime_divisors++;
                if (prime_divisors > 2)
                {
                    break;
                }
            }
        }

        if (prime_divisors == 2)
        {
            ans++;
        }
    }

   
    console.log(ans);
}


main();