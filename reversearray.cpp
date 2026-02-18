function reverseArray(arr) {
    let n = arr.length;
    
    // Temporary array to store elements 
    // in reversed order
    let temp = new Array(n);
  
    // Copy elements from original array
    // to temp in reverse order
    for (let i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];
  
    // Copy elements back to original array
    for (let i = 0; i < n; i++)
        arr[i] = temp[i];
}

// Driver Code 
const arr = [1, 4, 3, 2, 6, 5];

reverseArray(arr);
console.log(arr.join(" "));