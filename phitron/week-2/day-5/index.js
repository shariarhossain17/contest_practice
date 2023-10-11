function cubeNumber(number) {
    if (typeof number !== 'number') {
      return 'Please provide a number';
    }
    const cube = Math.pow(number, 3);
    return cube;
  }
  
  function matchFinder(string1, string2) {
    if (typeof string1 !== 'string' || typeof string2 !== 'string') {
      return 'Please provide string inputs';
    }
    return string1.toLowerCase().includes(string2.toLowerCase());
  }
  
  function sortMaker(arr) {
    if (!Array.isArray(arr)) {
      return 'Please provide an array of numbers';
    }
    if (arr.length < 2) {
      return 'At least two numbers are required';
    }
    if (arr[0] === arr[1]) {
      return 'Equal';
    }
    if (arr[0] > 0 && arr[1] > 0) {
      return arr.sort((a, b) => b - a);
    }
    return 'Invalid input';
  }
  
  function findAddress(obj) {
    if (typeof obj !== 'object') {
      return 'Please provide a valid object';
    }
    const street = obj.street || '__';
    const house = obj.house || '__';
    const society = obj.society || '__';
    return `${street},${house},${society}`;
  }
  
  function canPay(changeArray, totalDue) {
    if (!Array.isArray(changeArray) || typeof totalDue !== 'number') {
      return 'Please provide an array and a number';
    }
    const element = changeArray.reduce((acc, current) => acc + current, 0);
    if (element >= totalDue) {
      return true;
    }
    if (element < totalDue && changeArray.length > 0) {
      return false;
    }
    return 'Please put some elements in the array';
  }
  