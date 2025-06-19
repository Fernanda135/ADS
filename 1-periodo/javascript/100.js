    function printNumbers(n, result = '') {
        if (n > 100) {
            console.log(result.trim())
        return
        }
        result += n + ''
        printNumbers(n +1, result)
    }

    printNumbers(1)